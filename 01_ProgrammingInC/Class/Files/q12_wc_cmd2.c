// Impliment wc command with out using fgets and fscanf

#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch,*s;
	int cc=0,cw=0,cl=0,i;

	if(argc!=2)
	{
		printf("Usage : ./a.out fname\n");
		return;
	}

	if(!(fp=fopen(argv[1],"r")))
	{
		perror("fopen");
		return;
	}

	while((ch=fgetc(fp))!=EOF)
	cc++;

	rewind(fp);

	s=malloc(cc+1);

	for(i=0;i<cc;i++)
	{
		s[i]=fgetc(fp);
	}
	s[i]='\0';

	printf("%s",s);

	for(i=0;s[i];i++)
	{
	if(s[i]==' ' || s[i]=='\n')
	cw++;

	if(s[i]=='\n')
	cl++;
	}


	printf("char=%d word=%d line=%d\n",cc,cw,cl);
}
