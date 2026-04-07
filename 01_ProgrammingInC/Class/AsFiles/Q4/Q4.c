#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
	FILE *fp;
	char s[20];

	if(argc!=2)
	{
		printf("Usage:./a.out Filename\n");
		return;
	}
	
	fp=fopen(argv[1],"r+");
		if(fp==0)
		{
			printf("File is not present\n");
			return;
		}
	while(fscanf(fp,"%s",s)!=EOF)
	{
		fseek(fp,-(strlen(s)),SEEK_CUR);
		if(s[0]>='a'&&s[0]<='z')
			s[0]=s[0]-32;
		fprintf(fp,"%s",s);
	}


}
