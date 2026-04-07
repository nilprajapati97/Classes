#include<stdio.h>
main()
{
	char s[20],temp,vowel[10]={'A','E','I','O','U','a','e','i','o','u'};
	int i,j,m;
	
	printf("Enter the string\n");
	scanf(" %[^\n]",s);


	printf("The vowels present in the given loop are \n");
	for(i=0;s[i];i++)
	{
		for(j=0;j<10;j++)
			if(s[i]==vowel[j])
					printf("%c ",s[i]);
		

	}
	printf("\n");

}

