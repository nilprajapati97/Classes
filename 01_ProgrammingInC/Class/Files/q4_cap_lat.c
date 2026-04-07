// Write a Program to Capitalize First Letter of every Word in a file.

#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char s[50],ch;
	int l;

	if(argc!=2)
	{
		printf("Usage : ./a.out fname\n");
		return;
	}
	if(!(fp=fopen(argv[1],"r+")))
	{
		printf("File is not present\n");
		return;
	}

	while(fscanf(fp,"%s",s)!=EOF)
	{
		l=strlen(s);
		fseek(fp,-l,1);
		ch=fgetc(fp);
		if(ch<='z' && ch>='a')
		{
			ch=ch-32;
			fseek(fp,-1,1);
			fputc(ch,fp);
		}
		fseek(fp,l-1,1);
	}
}
