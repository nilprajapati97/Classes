#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count_lines(FILE *);
void create_array(FILE *,char **);
void merge_file(FILE *,char **,char **);

main(int argc,char **argv)
{
	FILE *fp1,*fp2,*fd;
	char **p,**q;
	int i,j,c1,c2;


	if(argc!=4)
	{
		printf("Usage:./a.out filename1 filename2 merge_filename\n");
		return;
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");
		if((fp1==0)||(fp2==0))
		{
			printf("File is not present\n");
			return;
		}
	c1=count_lines(fp1);
	c2=count_lines(fp2);

	printf("c1=%d,c2=%d\n",c1,c2);


	//Dynamically Allocate the Buffers
	p=malloc(sizeof(char*)*(c1+1));
	q=malloc(sizeof(char*)*(c2+1));

	//Assign FIle values to buffers
	create_array(fp1,p);
	create_array(fp2,q);

	//Print the Buffers
/*	for(j=0;j<c2;j++)
		printf("%s",q[j]);
	printf("------------------\n");
	for(j=0;j<c1;j++)
		printf("%s",p[j]);
*/
	//Merge The Files
	fd=fopen(argv[3],"w");	
	merge_file(fd,p,q);

}

int count_lines(FILE *fp)
{
	int c=0;
	char ch;
		while((ch=fgetc(fp))!=EOF)
			if(ch=='\n')
				c++;
	rewind(fp);
	return c;
}

void create_array(FILE *fp,char **p)
{
	char ch;
	int i,j,c;
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


void merge_file(FILE *fp,char **p,char **q)
{
	int i,l,m;
	char *r,*s;
	for(i=0;p[i]&&q[i];i++)
	{
		l=strlen(p[i]);
		m=strlen(q[i]);
		r=malloc(sizeof(char)*(l+m));
		strcpy(r,p[i]);
		s=strchr(r,'\n');
		s[0]=' ';
		strcpy(s+1,q[i]);
		fputs(r,fp);
		free(r);
	}
	if(p[i]==q[i]);
	else if(q[i]==0)
		{
			for(;p[i];i++)
				fputs(p[i],fp);
		}
	else if(p[i]==0)
		{
			for(;q[i];i++)
				fputs(q[i],fp);
		}
}



