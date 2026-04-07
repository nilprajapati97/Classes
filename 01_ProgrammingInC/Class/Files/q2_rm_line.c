#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	int n,i,l,c=0;
	char **s,a[50];

	if(argc!=3)
	{
		printf("Usage : ./a.out fname line_num \n");
		return;
	}

	if(!(fp=fopen(argv[1],"r")))
	{
		printf("File is not present\n");
		return;
	}
	
	n=atoi(argv[2]);

	while(fgets(a,50,fp)!=NULL)
	c++;
	rewind(fp);

	if(n>c)
	{	
		printf("%d line is not present in file\n",n);
		return;
	}	

	s=malloc(sizeof(char *)*c);

	for(i=0;i<c;i++)
	{
		s[i]=malloc(20);
		fgets(s[i],20,fp);
	}

	for(i=0;i<20;i++)
		s[n-1][i]=0;
//	bzero(s[n-1],20);
	fclose(fp);
	fp=fopen(argv[1],"w");
	
	for(i=0;i<c;i++)
		fputs(s[i],fp);
	
	fclose(fp);
	
}
