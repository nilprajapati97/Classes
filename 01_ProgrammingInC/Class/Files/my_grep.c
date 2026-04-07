// Make UDF of grep command

#include<stdio.h>
#include<string.h>
main(int argc, char **argv)
{
FILE *fp;
int c=0;
char s[50];

if(argc!=3)
{
	printf("Usage: ./a.out fname substring\n");
	return;
}

fp=fopen(argv[1],"r");

if(fp==0)
{
	printf("File is not present\n");
	return;
}

while(fgetc(fp)!=EOF)
	c++;
rewind(fp);

//printf("%d\n",c);

while(fgets(s,c,fp))
if(strstr(s,argv[2]))
	printf("%s",s);


}
