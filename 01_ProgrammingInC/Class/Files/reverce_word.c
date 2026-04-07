// WAP to reverce desired word from file

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverce(char *a,int l)
{
	char t;
	int i;

	for(i=0;i<l;i++,l--)
	{
		t=a[i];
		a[i]=a[l];
		a[l]=t;
	}

}
main(int argc,char **argv)
{
	FILE *fp;
	char *s,t,a[50];
	int l,i,len;

	if(argc!=3)
	{
		printf("Usage : ./a.out fname word\n");
		return;
	}

	if(!(fp=fopen(argv[1],"r+")))
	{
		printf("Error in file open\n");
		return;
	}

	s=malloc(strlen(argv[2])+1);
	strcpy(s,argv[2]);

	for(l=0;argv[2][l];l++);
	len=l;
	s[l]=0;
	l--;

	reverce(s,l);

	/*
	   for(i=0;i<l;i++,l--)
	   {
	   t=s[i];
	   s[i]=s[l];
	   s[l]=t;
	   }
	 */

	s[len]=0;
	while(fscanf(fp,"%s",a)!=EOF)
	{
		if(!strcmp(a,argv[2]))
		{
			fseek(fp,-len,SEEK_CUR);
			fputs(s,fp);
		}
	}
}
