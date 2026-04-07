#include<stdio.h>
#include<stdlib.h>

void my_strcpy(char *,const char *);
int my_strlen(const char*);
void rev_string(char *);
int my_strcmp(const char*,const char *);

main(int argc,char **argv)
{
	FILE *fp;
	char *p,s[50];
	int len;
		if(argc!=3)
		{
			printf("Usage:./a.out filename string");
			return;
		}

		fp=fopen(argv[1],"r+");
			if(fp==0)
			{
				printf("File is not present\n");
				return;
			}
	len=my_strlen(argv[2]);
	p=malloc(sizeof(char)*(len+1));
	my_strcpy(p,argv[2]);
	rev_string(p);
	while(fscanf(fp,"%s",s)!=EOF)
		if(!my_strcmp(argv[2],s))
		{
			fseek(fp,-len,SEEK_CUR);
			fprintf(fp,"%s",p);
		}

}

int my_strlen(const char*p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
void rev_string(char *p)
{
	char temp;
	int i,j;
	for(i=0;p[i];i++);
	for(i=i-1,j=0;j<i;i--,j++)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
}
int my_strcmp(const char *s1,const char *s2)
{
	int i;
	for(i=0;s1[i];i++)
		if(s1[i]!=s2[i])
			break;
	if(s1[i]==s2[i])
		return 0;
	else if(s1[i]>s2[i])
		return 1;
	else
		return -1;
}

void my_strcpy(char *d,const char *s)
{
	int i;
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]='\0';
}
