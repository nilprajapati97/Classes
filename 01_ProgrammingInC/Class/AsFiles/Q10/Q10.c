#include<stdio.h>
#include<stdlib.h>

int count_lines(FILE *);
void create_array(FILE *,char **);
void sort_array(char **,int);
int my_strcmp(const char *,const char *);
main(int argc,char **argv)
{
	FILE *fp;
	int i,j,c;
	char **p;
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

	c=count_lines(fp);
	//Dynamically allocate the memory 
	p=malloc(sizeof(char *)*(c+1));
//	printf("%d\n",c);

	//Create Array
	create_array(fp,p);

	//Sort Array
	sort_array(p,c);

	//Print Array
	for(i=0;i<c;i++)
		printf("%s",p[i]);	
}

int count_lines(FILE *fp)
{
	int c;
	char ch;
		c=0;
		while((ch=fgetc(fp))!=EOF)
			if(ch=='\n')
				c++;	

	rewind(fp);
	return c;
}

void create_array(FILE *fp,char **p)
{
	int i,j,c;
	char ch;
		c=0;i=0;
		while((ch=fgetc(fp))!=EOF)
		{
			if(ch!='\n')
				c++;
			else
			{
				c++;
				fseek(fp,-c,SEEK_CUR);
				p[i]=malloc(sizeof(char)*(c+1));
				for(j=0;(ch=fgetc(fp))!='\n';j++)
					p[i][j]=ch;
				p[i][j++]='\n';	
				p[i][j]='\0';
				i++;
				c=0;	
			}
		}
	rewind(fp);	
}


void sort_array(char **p,int n)
{
	int i,j;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(my_strcmp(p[j],p[j+1])==1)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;	
			}
		}
	}	
}




int my_strcmp(const char *s1,const char *s2)
{
	int i,j;
	for(i=0,j=0;s1[i];)
	{
		if(!(s1[i]>='A'&&s1[i]<='Z'))
		{	
			i++;
			continue;
		}
		if(!(s2[j]>='A'&&s2[j]<='Z'))
		{	
			j++;
			continue;
		}
		else
		{
			if(s1[i]!=s2[j])
				break;
			i++;
			j++;
		}
	}
	if(s1[i]==s2[j])
		return 0;
	else if(s1[i]>s2[j])
		return 1;
	else
		return -1;

}




