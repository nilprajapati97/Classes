// Write a Program to replace the perticular word with another word ( can be any length ) in a given file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char a[1000],s[50],ch;
	int i,j;

	if(argc!=4)
	{
		printf("Usage : ./a.out fname word1 word2\n");
		return;
	}

	if(!(fp=fopen(argv[1],"r")))
	{
		printf("File is not present\n");
		return;
	}
/*
	while(fgets(a,50,fp)!=NULL)
		l++;
	rewind(fp);
*/
/*
	s=malloc(sizeof(char *)*l);

	for(i=0;i<l;i++)
	{
		s[i]=malloc(50);
		//fgets(s[i],51,fp);
	}

*/
// Replace word of any char
	i=j=0;
	while((ch=fgetc(fp))!=EOF)
	{

		a[i++]=ch;
		
		if(ch!=' ' && ch!='\n')
		{
			fseek(fp,-1,1);
			fscanf(fp,"%s",s);

			if((strcmp(s,argv[2]))==0)
			{
				i--;
				for(j=0;argv[3][j];j++)
					a[i++]=argv[3][j];
			}
			else
			{
				i--;
				for(j=0;s[j];j++)
					a[i++]=s[j];

			}

		}

	}
	a[i]='\0';

	fp=fopen(argv[1],"w");

	for(i=0;a[i];i++)
		fputc(a[i],fp);
}


/*
   while((ch=fgetc(fp))!=EOF)
   {

   if(ch!=' ' && ch!='\n')
   {
   fseek(fp,-1,1);	
   fscanf(fp,"%s",a);

   if(strcmp(a,argv[2])==0)
   {
   i--;
   for(j=0;argv[3][j];j++)
   a[i++]=argv[3][j];

   }
   else
   {
   i--;
   for(j=0;s[j];j++)
   a[i++]=s[j];


   }


   }


   }


   a[i]=0;

 */













/*
   fp=fopen(argv[3],"w");

   for(i=0;i<l;i++)
   {

   while(s[i][j])
   {
   for(j=0,k=0;s[i][j]!=' ' || s[i][j]!='\n';j++)
   a[k++]=s[i][j];

   if(strcmp(a,argv[1])==0)
   {
   strcpy(a,argv[2]);
   }

   fprintf(fp,"%s",a);
   }

   }
 */
/*
//while(fscanf(fp,"%s",a)=!EOF)
while(fgets(p,50,fp)!=NULL)
{
for(j=0,k=0;s[0][j]!=' ' || a[0][j]!='\n';j++)
a[k++]=s[0][j];

if(strcmp(a,argv[1])==0)
{
strcpy(a,argv[2]);
}

l1=strlen(a);
strcpy(s[i],a);

s[i]+=l1;
}
//fclose(fp);
fp=fopen(argv[1],"w");
 */

