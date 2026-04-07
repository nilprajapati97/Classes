// WAP to search word from a given file

#include<stdio.h>
main(int argc, char **argv)
{
int c=0;
char s[20];
FILE *fp;

if(argc!=3)
{
	printf("Usage : ./a.out fname word\n");
	return;
}

if((fp=fopen(argv[1],"r"))==0)
{
	printf("File is not present\n");
	return;
}

while(fscanf(fp,"%s",s)!=EOF)
	if(strcmp(s,argv[2])==0)
		c++;

printf("Count = %d\n",c);

}
