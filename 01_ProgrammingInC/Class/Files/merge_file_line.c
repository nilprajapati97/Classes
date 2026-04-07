// merge two files line by line and and save it into the another file

#include<stdio.h>
main(int argc,char **argv)
{
FILE *fp1,*fp2,*fp;
char s[50],n[15];

if(argc!=3)
{
	printf("Usage : ./a.out fname1 fname2\n");
	return;
}

if(!(fp1=fopen(argv[1],"r")))
{
	printf("File1 is not present\n");
	return;
}

if(!(fp2=fopen(argv[2],"r")))
{
	printf("File2 is not present\n");
	return;
}

printf("Enter the name of the file : ");
scanf("%s",n);

fp=fopen(n,"w");

while(1)
{
	
	if(fgets(s,50,fp1)!=NULL)
		fprintf(fp,"%s",s);

	if(fgets(s,50,fp2)!=NULL)
		fprintf(fp,"%s",s);

	if(feof(fp1) && feof(fp2))
		break;
}
}
