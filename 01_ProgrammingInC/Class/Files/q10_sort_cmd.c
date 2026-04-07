// Write a Program to implement sort command. (Check the command:  sort  filename.c )

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
FILE *fp;
char **p,a[50];
int c=0,i,j;

if(argc!=2)
{
	printf("Usage : ./a.out fname\n");
	return;
}

if(!(fp=fopen(argv[1],"r")))
{
	printf("File is not present\n");
	return;
}

while(fgets(a,50,fp)!=NULL)
c++;
rewind(fp);

p=malloc(sizeof(char *)*c);

for(i=0;i<c;i++)
{	
	fgets(a,50,fp);
	p[i]=malloc(50);
	strcpy(p[i],a);
}
///////////////////////////////////
for(i=0;i<c;i++)
	printf("%s",p[i]);

///////////////////////////////////

for(i=0;i<c;i++)
	for(j=i+1;j<c;j++)
	{
		if(strcmp(p[i],p[j])==1)
		{
			strcpy(a,p[i]);
			strcpy(p[i],p[j]);
			strcpy(p[j],a);
		}
	}

printf("==========\n");

for(i=0;i<c;i++)
	printf("%s",p[i]);

}
