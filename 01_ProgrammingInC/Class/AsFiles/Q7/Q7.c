#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	FILE **fp;
	int i,j;
	char s[100];
		if(argc<3)
		{
			printf("Usage:./a.out sourcefile file1 file2 file3....\n");
			return;
		}
	fp=malloc(sizeof(FILE *)*(argc-1));

	fp[0]=fopen(argv[1],"r");
		if(fp[0]==0)
		{
			printf("Source file is not present\n");
			return;
		}
	for(i=1;i<argc-1;i++)
	{
		fp[i]=fopen(argv[i+1],"w");
	}
	while(fgets(s,100,fp[0])!=NULL)
	{
		for(i=1;i<argc-1;i++)
		{
			fputs(s,fp[i]);

		}
	}
}
