#include<stdio.h>
main()
{	
	char s[40],d[40];
	int i,j,k,ls,ld;

	printf("Enter a string\n");
	scanf(" %[^\n]",s);

	for(ls=0;s[ls];ls++);	//Length of Source String
	ld=ls;
	d[ld]=s[ls];		// Null character inserted in destination string
	ld--;
	ls--;
	

	for(i=0;s[i];i++)
	{
		if(s[i]!=' ')
		{
			for(j=0;s[i+j]!=' '&&s[i+j]!='\0';j++);
			j--;
			for(k=0;k<=j;k++)
				d[ld-j+k]=s[i+k];
			ld=ld-j-1;
			i=i+j;	
		
		}
		else
		{
			d[ld--]=s[i];
		}
	}
	
	printf("Destination string:\n%s\n",d);	
	
}
