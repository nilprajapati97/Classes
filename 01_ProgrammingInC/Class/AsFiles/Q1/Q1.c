#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char *p,ch;
	int c,i;
		fp=fopen("data","r+");
		if(fp==0)
		{
			printf("The given file is absent\n");
			return;
		}
	c=0;
	while(fgetc(fp)!=EOF)
		c++;
	p=malloc(c+1);
	rewind(fp);
	i=0;
	while((ch=fgetc(fp))!=EOF)
		p[i++]=ch;
	p[i]='\0';	

	for(i=0;p[i];i++)
	{
		if((p[i]>='A' && p[i]<='Z')||(p[i]>='a' && p[i]<='z'))
			p[i]=p[i]^1<<5;

	}
	rewind(fp);
	fputs(p,fp);
}
