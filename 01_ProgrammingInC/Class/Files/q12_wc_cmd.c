// Write a Program to implement wc command. (Check the command: wc filename.c)

#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	int c1=0,c2=0,c3=0;
	char a[50];

	if(argc!=2)
	{
		printf("Usage : ./a.out fname\n");
		return;
	}

	if(!(fp=fopen(argv[1],"r")))
	{
		printf("File is not present\n");
		return;
	}

	while(fgets(a,50,fp)!=NULL)
		c1++;
	rewind(fp);

	while(fscanf(fp,"%s",a)!=EOF)
		c2++;

	c3=ftell(fp);

	printf(" %d %d %d %s\n",c1,c2,c3,argv[1]);

}
