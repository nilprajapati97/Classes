// Merge file

#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
FILE *fp1,*fp2,*fp;
char a[30],n[30],b[30],ch;
int len,i,j;
//int ch;

if(argc!=3)
{
	printf("Usage : ./a.out fname1 fname2\n");
	return;
}
if(!(fp1=fopen(argv[1],"r")))
{
	printf("File1 is not present\n");
	return;
}

if(!(fp2=fopen(argv[2],"r")))
{
	printf("File2 is not present\n");
	return;
}

//////////////////////////////////////////////

printf("Enter the name you want : ");
scanf("%s",n);

fp=fopen(n,"w");

while(1)
{

	if(fscanf(fp1,"%s",a)!=EOF)
		fprintf(fp,"%s ",a);

	if(fscanf(fp2,"%s",b)!=EOF)
		fprintf(fp,"%s ",b);

if(feof(fp1) && feof(fp2))
break;
}

/*
while(!feof(fp1) && !feof(fp2))
{
	fscanf(fp1,"%s",a);
	fprintf(fp,"%s ",a);
	fscanf(fp2,"%s",b);
	fprintf(fp,"%s ",b);
}

//i=ftell(fp1);
//j=ftell(fp2);

//printf("%d %d\n",i,j);
//if(!feof(fp1))
if(fscanf(fp1,"%s",a)!=EOF)
{
//	fprintf(fp,"%s ",a);
	while(fscanf(fp1,"%s",a)!=EOF)
		fprintf(fp,"%s ",a);
		
//	fclose(fp);	
//	fclose(fp1);
}
//else if(!feof(fp2))
else if(fscanf(fp2,"%s",b)!=EOF)
{

	while(fscanf(fp2,"%s",b)!=EOF)
		fprintf(fp,"%s ",b);


//	fclose(fp);
//	fclose(fp1);
}





//if(fscanf(fp2,"%s",b)!=EOF)
//	fprintf(fp,"%s ",a);

//	len=strlen(a);
//	len++;
//	printf("%d\n",len);

//	fseek(fp,-len,SEEK_CUR);	
//	fprintf(fp,"%s ",a);
//fprintf(fp,"%s ",a);
*/
/*
if(fscanf(fp1,"%s",a)!=EOF)
{
	fprintf(fp,"%s ",a);
	while(fscanf(fp1,"%s",a)!=EOF)
		fprintf(fp,"%s ",a);
}
else if(fscanf(fp2,"%s",b)!=EOF)
{
	
	fprintf(fp,"%s ",b);
	while(fscanf(fp2,"%s",b)!=EOF)
		fprintf(fp,"%s ",b);

}
*/


/*
while(fscanf(fp1,"%s",a)!=EOF)
{
	
	fprintf(fp,"%s ",a);
	fscanf(fp2,"%s",b);
	//fseek(fp2,-1,SEEK_CUR);
	if(!feof(fp2))
	{

	fprintf(fp,"%s ",b);
	printf("b=%s\n",b);
		}
}

//fscanf(fp2,"%s",b);
while(fscanf(fp2,"%s",b)!=EOF)
{
	fprintf(fp,"%s ",b);
	//fscanf(fp2,"%s",a);
	printf("b=%s\n",b);
	
}
*/
}
