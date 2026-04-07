#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int my_strlen(const char *);
int count_lines(FILE *);
void create_array(FILE *,char **);
int my_strstr(const char *,const char *);

main(int argc, char **argv)
{
	FILE *fp,*fd;
	char **p,ch,*q;
	int c,i,j,k,ls,lr,m,t,len,extra_bytes,count_words;
	
	if(argc!=4)
	{
		printf("Usage:./a.out filename search_string replace_string\n");
		return;
	}
	
	fp=fopen(argv[1],"r+");
		if(fp==0)
		{
			printf("File is not present\n");
			return;
		}



	ls=my_strlen(argv[2]);
	lr=my_strlen(argv[3]);

	//Count the number of lines	
	c=count_lines(fp);
	len=c+1;
	p=malloc(sizeof(char *)*len);

	//Create dynamically allocated array
	create_array(fp,p);

	//Create a new destination file
	fd=fopen("temp","w");

	for(i=0;i<c;i++)
	{
		count_words=my_strstr(p[i],argv[2]);
		if(count_words!=0)
		{
			len=my_strlen(p[i])+1-(count_words*(ls-lr));
			q=malloc(sizeof(char)*len);
			for(m=0,j=0;p[i][j];j++,m++)
			{
				if(p[i][j]==argv[2][0])
				{
					for(k=1;argv[2][k];k++)
						if(p[i][j+k]!=argv[2][k])
							break;
					t=k;
					if(argv[2][k]=='\0')
					{
						for(k=0;argv[3][k];k++,m++)
							q[m]=argv[3][k];
						j=j+t-1;
						m--;
						continue;
					}
				}
				q[m]=p[i][j];

			}
			q[m]='\0';
			free(p[i]);	
			p[i]=q;
		}
		fputs(p[i],fd);
	}
}

int my_strlen(const char *s)
{
	int i;
	for(i=0;s[i];i++);
	return i;
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
	i=0;c=0;
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
			{
				p[i][j]=ch;
			}
			p[i][j++]='\n';
			p[i][j]='\0';
			i++;
			c=0;
		}
	}
	p[i++]=0;
	rewind(fp);
}

int my_strstr(const char *haystack,const char *needle)
{
	int i,j,c;
	for(i=0,c=0;haystack[i];i++)
	{
		if(haystack[i]==needle[0])
		{
			for(j=1;needle[j];j++)
				if(haystack[i+j]!=needle[j])
					break;
			if(needle[j]=='\0')
				c++;
		}
	}
	return c;
}













