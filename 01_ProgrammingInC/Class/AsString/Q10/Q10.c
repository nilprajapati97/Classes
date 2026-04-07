#include<stdio.h>
main()
{

	
	char s[100];
	int i,c,j;

	printf("Enter the given string \n");
	scanf(" %[^\n]",s);

	for(i=0;s[i];i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{ 
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}	
	}

	printf("%s\n",s);


}
