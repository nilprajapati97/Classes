#include<stdio.h>
#include<stdlib.h>

//File based Functions
int count_lines(FILE *);
void create_array(FILE *,char **);
void print_file(char **,int);

//Header Files Related Function
int count_header(char **,int);
void create_header_array(char **,int,char **,int*);
void delete_duplicate(char **,int*);
void create_purec(FILE *,char **,int);



//String based functions
int count_strstr(const char*,const char*);
int count_strchr(const char*,int);
char* strstr(const char*,const char*);
char* strchr(const char*,int c);
int strlen(const char*);
int strcmp(const char*,const char*);
int special_strcmp(const char *s1,const char *s2);
void my_strcpy(char*,const char*);
void my_strcat(char *,const char*);


main(int argc,char **argv)
{
	FILE *fp,*fd;

	int c,i,j,number_header;

	char **p,**header,*dest;	

	char *t;

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

	//Count the number of lines
	c=count_lines(fp);

	//Dynamically allocate the memory
	p=malloc(sizeof(char *)*(c+1));

	//Fetch the file
	create_array(fp,p);

	//Find Header Files
	number_header=count_header(p,c);
	
	//Create a list for Headers
	header=malloc(sizeof(char *)*number_header);


	//Fetch the Headers
	create_header_array(p,c,header,&number_header);

	//Delete Duplicate Headers
	delete_duplicate(header,&number_header);

	//Fetch the header files and put it in the Pure C File
	

	dest=malloc(sizeof(char)*(strlen(argv[1])+1));	//Create the Filename for output file
	my_strcpy(dest,argv[1]);
	t=strchr(dest,'.');
	*(t+1)='i';

	printf("%s\n",dest);
	fd=fopen(dest,"w");	//Open the file
	
	create_purec(fd,header,number_header);
		
	
	//Print the file
	print_file(header,number_header);
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
	int i,c,j;
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
			{
				p[i][j]=ch;
			}
			p[i][j++]='\n';
			p[i][j]='\0';
			i++;
			c=0;
		}
	}
	rewind(fp);
}

void print_file(char **p,int c)
{
	int i;
	for(i=0;i<c;i++)
		printf("%s",p[i]);
}



//Header Related Functions

int count_header(char **p,int c)
{
	int count=0,i;
	for(i=0;i<c;i++)
	{	
		count+=count_strstr(p[i],"#include");
	}
	return count;
}

void create_header_array(char **p,int c,char **header,int *d)
{
	int i,j;
	char *t;
	for(i=0,j=0;i<c;i++)
	{
		t=strstr(p[i],"#include");
		if(t!=0)
		{
			t=t+strlen("#include");
			if(*t=='"')
			{
				t=strchr(t+1,'"');
				if(t!=0)
				{
					header[j++]=p[i];
				}
				else
					(*d)--;
			}
			else if(*t=='<')
			{
				t=strchr(t+1,'>');
				if(t!=0 )
				{
					header[j++]=p[i];
				}
				else
				{
					(*d)--;
					printf("Fatal Error\n");
					return;
				}
			}
		}
		
	}
}

void delete_duplicate(char **header,int *d)
{
	int i,j,k,c;
	c=*d;
	//Special Case String Comparison
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(!strcmp(header[i],header[j]))
			{
				for(k=j;k<c-1;k++)
					header[k]=header[k+1];
				j--;
				c--;
			}
		}
		printf("%d\n",c);
	}
	*d=c;
}

void create_purec(FILE *fd,char **header,int n)
{
	FILE *fp;
	char *t,*t2,*t3,ch;
	char *t1="/usr/include/";
	int i,j,c;
	for(i=0;i<n;i++)
	{
		t=strchr(header[i],'<');
		if(t!=0)
		{
			t=t+1;
			for(c=0;t[c]!='>';c++);
			t[c]=0;
			c=strlen(t1)+c+1;
			t2=malloc(sizeof(char)*c);
			my_strcpy(t2,t1);
			my_strcat(t2,t);
			c=c-strlen(t1)-1;
			t[c]='>';			
			fp=fopen(t2,"r");

			if(fp==0)
			{
				printf("Fatal Error header file is not present\n");
			}
			else
			{
				while((ch=fgetc(fp))!=EOF)
					fputc(ch,fp);
				fclose(fp);
			}
			free(t2);
		}
		else
		{
			t=strchr(header[i],'"');
			t=t+1;
			for(c=0;t[c]!='"';c++);
			t[c]=0;
			c++;
			t3=malloc(sizeof(char)*c);
			t3[0]=0;
			my_strcat(t3,t);
			fp=fopen(t3,"r");
			if(fp==0)
				{
					c=strlen(t1)+c;
					t2=malloc(sizeof(char)*c);
					my_strcpy(t2,t1);
					my_strcat(t2,t3);
					c=c-strlen(t1)-1;
					t[c]='"';	
					printf("%s\n",t2);
					fp=fopen(t2,"r");
					if(fp==0)
					{
						printf("Fatal Error header file is not present\n");
					}
					else
					{
						while((ch=fgetc(fp))!=EOF)
						fputc(ch,fd);
						fclose(fp);
					}
				}
			else
			{
				while((ch=fgetc(fp))!=EOF)
					fputc(ch,fd);
				fclose(fp);
			}
			free(t2);
			free(t3);
		}
	}
	rewind(fd);
}



// String Based Functions
int count_strstr(const char *haystack,const char *needle)
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
			i=i+j-1;
		}
	}
	return c;
}


char* strstr(const char *haystack,const char *needle)
{
	int i,j;
	for(i=0;haystack[i];i++)
	{
		if(haystack[i]==needle[0])
		{
			for(j=1;needle[j];j++)
				if(haystack[i+j]!=needle[j])
					break;
			if(needle[j]=='\0')
				return (haystack +i);
		}
	}
	return 0;
}

int count_strchr(const char *s,int ch)
{
	int i,c;
	for(i=0,c=0;s[i];i++)
		if(s[i]==ch)
			c++;
	return c;
}

char * strchr(const char *s,int ch)
{
	int i;
	for(i=0;s[i];i++)
		if(s[i]==ch)
			return(s+i);
	return 0;
}

int strlen(const char*s)
{
	int i;
	for(i=0;s[i];i++);
	return i;

}

int strcmp(const char *s1,const char *s2)
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
/*
int special_strcmp(const char *s1,const char *s2)
{
	int i,j;
	for(i=0;s1[i];i++)
	{
		if((s1[i]=='"'&&s2[i]=='<')||(s1[i]=='"'&&s2[i]=='>'))
		{
			i++;
		}
		(s1[i]=='<'&&s2[i]=='"')||(s1[i]=='>'&&s2[i]=='"')
		{
			i++;
		}
		else
		{
			if(s1[i]!=s2[j])
			{
				break;
			}
		}
		
	}

	if(s1[i]==s2[i])
		return 0;

	else if(s1[i]>s2[i])
		return 1;

	else
		return -1;
}
*/
void my_strcpy(char *d,const char*s)
{
	int i;
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]='\0';
}

void my_strcat(char *d,const char*s)
{
	int i,j;
	for(i=0;d[i];i++);
	for(j=0;s[j];j++)
		d[i+j]=s[j];
	d[i+j]=s[j];
} 










