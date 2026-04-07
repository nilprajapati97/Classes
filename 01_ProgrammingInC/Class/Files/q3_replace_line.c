// Write a Program to replace a Specified line in a given file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	int n,i,c=0,l;
	char **s,a[50];

	if(argc!=4)
	{
		printf("Usage : ./a.out fname line_num String\n");
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

	s=malloc(sizeof(char *)*c);

	for(i=0;i<c;i++)
	{
		s[i]=malloc(50);
		fgets(s[i],50,fp);
	}

	n=atoi(argv[2]);
	l=strlen(argv[3]);

	strcpy(a,argv[3]);
	a[l]='\n';
	a[l+1]='\0';

	strcpy(s[n-1],a);

	fclose(fp);
	fp=fopen(argv[1],"w");

	for(i=0;i<c;i++)
		fprintf(fp,"%s",s[i]);

	fclose(fp);
}
