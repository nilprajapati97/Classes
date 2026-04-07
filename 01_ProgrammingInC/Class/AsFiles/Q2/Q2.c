#include<stdio.h>
#include<stdlib.h>
#include<string.h>


main(int argc,char **argv)
{
	FILE *fp;
	char **p,ch,*q;
	int c,i,j,w;

		if(argc<3)
		{
			printf("Usage:./a.out filename linenumber/line\n");
			return;
		}
	fp=fopen(argv[1],"r");
		if(fp==0)
		{
			printf("File is not present\n");
			return;
		}
	
	//Line count
	c=0;
	while((ch=fgetc(fp))!=EOF)
		if(ch=='\n')
			c++;

//	printf("%d\n",c);
	rewind(fp);

	//Dynamically assign complete array using malloc function

	p=malloc(sizeof(char *)*(c+1));

	i=0;c=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch!='\n')
		{
			c++;
		}
		else
		{
			printf("I am in Else----------------------\n");
			c++;
			p[i]=malloc(sizeof(char)*(c+1));			
			fseek(fp,-c,SEEK_CUR);
			for(j=0;(ch=fgetc(fp))!='\n';j++)
			{
				p[i][j]=ch;
			//	printf("%c",p[i][j]);
			}
			p[i][j++]='\n';	
			p[i][j]='\0';	
			c=0;
			i++;
		
		}			
	}
/*	printf("\ni=%d\n",i);
	printf("------------------\n");
	for(j=0;j<i;j++)
		printf("%s,%u\n",p[j],p[j]);*/
	c=i;

	
	//Check whether line number is given or data is given
	if(argc==3)
	{
		j=atoi(argv[2]);
		if(j>c || j<=0)
		{
			printf("Please enter a valid line number\n");
			return;
		}
		else
		{ 
			j--;
			fclose(fp);
			fp=fopen("new","w");
				for(i=0;i<c;i++)
					if(i>=j)
						p[i]=p[i+1];
				c--;
			for(i=0;i<c;i++)
				fputs(p[i],fp);
		}			
	}
	else
	{
		for(i=2,w=0;i<argc;i++)
		{
			for(j=0;argv[i][j];j++)
			w++;
			w++;
		}

		q=malloc(sizeof(char)*w);
		for(i=2,w=0;i<argc;i++)
		{
			for(j=0;argv[i][j];j++)
				q[w++]=argv[i][j];
			q[w++]=' ';
		}
		q[--w]='\n';
		q[++w]='\0';

		fclose(fp);
		fp=fopen("new","w");
		for(i=0;i<c;i++)
			if(!strcmp(p[i],q))
			{
				for(j=i;j<c;j++)
					p[j]=p[j+1];
				c--;
			}
				
		for(i=0;i<c;i++)
			fputs(p[i],fp);

	}
}























