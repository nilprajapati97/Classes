#include<stdio.h>
#include<stdlib.h>

int my_strlen(const char *);
void reverse_string(char *);	

main(int argc,char **argv)
{
	FILE *fp;
	char ch,*p;
	int c,i;
		if(argc!=2)
		{
			printf("Usage:./a.out filename\n");
			return;
		}
	fp=fopen(argv[1],"r");
		if(fp==0)
		{
			printf("File is not present\n");
			return;
		}
	c=0;
	while(fgetc(fp)!=EOF)
		c++;
	
	p=malloc(sizeof(char)*(c+1));
	rewind(fp);
	i=0;
	while((ch=fgetc(fp))!=EOF)
		p[i++]=ch;
	p[i]='\0';
	rewind(fp);
	fclose(fp);
	fp=fopen("temp","w");
	reverse_string(p);
	fputs(p,fp);
}

int my_strlen(const char *s)
{
	int i=0;
	for(i=0;s[i];i++);
	return i;
}

void reverse_string(char *s)
{
	int i,j;
	char temp;
	i=my_strlen(s);
	for(j=0,i=i-1;j<i;j++,i--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}

