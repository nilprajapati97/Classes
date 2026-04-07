// WAP to search word from a given file (Using fgetc)

#include<stdio.h>
main(int argc, char **argv)
{
int c=0,i,l=0;
char s[20],ch;
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



















printf("Count = %d\n",c);

}
