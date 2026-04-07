// Make UD cp function

#include<stdio.h>
main(int argc,char **argv)
{
FILE *fs,*fd;

char ch,c;

	if(argc!=3)
	{
		printf("Usage : ./a.out source_fname dest_fname\n");
		return;	
	}
	
	fs=fopen(argv[1],"r");
	if(fs==0)
	{
		printf("Source file is not present\n");
		return;
	}

	fd=fopen(argv[2],"r");
	if(fd)
	{
		
		printf("Destination file is already present!!! Overwrite it? (y or n)\n");
		scanf(" %c",&c);

			if(c=='y')
			{
			fd=fopen(argv[2],"w");

			while((ch=fgetc(fs))!=EOF)
			fputc(ch,fd);
			}
			else
			return;
	}
			fd=fopen(argv[2],"w");

			while((ch=fgetc(fs))!=EOF)
			fputc(ch,fd);
}
