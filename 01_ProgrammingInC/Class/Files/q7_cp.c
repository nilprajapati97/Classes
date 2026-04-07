// Program to copy the one file into multiple destination files which are provided during the loadtime.

#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp,*fp1;
	int l,i;
	char *s;

	if(argc<2)
	{
		printf("Usage : ./a.out Sfname Dfname1 Dfname2\n");
		return;
	}

	if(!(fp=fopen(argv[1],"r")))
	{
		printf("File is not present\n");
		return;
	}
	fseek(fp,0,2);
	l=ftell(fp);
	rewind(fp);

	for(i=2;i<argc;i++)
	{
		s=malloc(l);
		rewind(fp);
		fp1=fopen(argv[i],"w");

		while(fgets(s,l,fp)!=NULL)
		{
			fputs(s,fp1);
		}
		fclose(fp1);
		free(s);
	}
}
