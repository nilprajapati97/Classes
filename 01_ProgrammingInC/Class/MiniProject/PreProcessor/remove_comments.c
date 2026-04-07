#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void remove_comments(char(*)[200],int);
void print_file(char (*)[200],int);

main()
{
	FILE *fs,*fd;
		
	char s[1000][200];
	int total_lines;

	fs=fopen("data.c","r");
	if(fs==0)
	{
		printf("File is not present\n");
		return;
	}
	

	for(total_lines=0;fgets(s[total_lines],100,fs);total_lines++);
	printf("Total number of lines=%d\n",total_lines);
	remove_comments(s,total_lines);
	print_file(s,total_lines);

}

void remove_comments(char (*s)[200],int n)
{
	int i,j;
	char *p;

	for(i=0;i<=n;i++)
	{
		if( s[i][0]=='/' && s[i][1]=='/' )
		{	
			s[i][0]='\0';
			continue;
		}
		else
		{
			p=s[i];
			p=strchr(s[i],';');
			if(p!=0)
			{
				p=strstr(p,"//");
				if(p!=0)
					*p='\0';
				else
				{

					p=strstr(s[i],"//");
					if(p!=0)
					*p='\0';
				}			
			}
			else
			{
				p=strstr(s[i],"//");
				if(p!=0)
				*p='\0';
	
			}
		}
	}
	
	for(i=0;i<=n;i++)
	{
		if(s[i][0]=='/')
		{
			if(s[i][1]=='*')
			{	
				

			}













/*		if( s[i][0]=='/' &&  s[i][1]=='*' )
		{
			s[i][0]='\0';
			
			for(;!p=strstr(s[i],"--/");i++)
			{
				s[i][0]='\0';	
			}
					
		}*/
/*		else
		{
			p=s[i];
			p=strchr(s[i],';');
			if(p!=0)
			{
				p=strstr(p,"---*");
				if(p!=0)
				{
					*p='\0';
					for(;!strstr(s[i],"---/");i++)
					{
						s[i][0]='\0';	
					}
					s[i][0]='\0';
				
				}
				else
				{

					p=strstr(s[i],"---*");
					*p='\0';
					for(;!strstr(s[i],"---/");i++)
					{
						s[i][0]='\0';	
					}
					s[i][0]='\0';
				}			
			}
			else
			{
				p=strstr(s[i],"---*");
				*p='\0';
				for(;!strstr(s[i],"---/");i++)
				{
					s[i][0]='\0';	
				}
				s[i][0]='\0';
			}	
		}*/	
	}
	

}
void print_file(char (*s)[200],int n)
{
	int i;
	
	for(i=0;i<=n;i++)
		printf("%s",s[i]);
	printf("\n");
}
