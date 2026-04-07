// Merge Two files char by char and save it into another file

#include<stdio.h>
main(int argc,char **argv)
{
FILE *fp1,*fp2,*fp;
char ch,n[15];

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


printf("Enter the file name : ");
scanf("%s",n);

fp=fopen(n,"w");

while(1)
{
	
	if((ch=fgetc(fp1))!=EOF)
		if(ch!='\n')
			fputc(ch,fp);

	if((ch=fgetc(fp2))!=EOF)
		if(ch!='\n')
			fputc(ch,fp);

	if(feof(fp1) && feof(fp2))
	{	
		fputc('\n',fp);	
	break;
	}
}
}
