#include<stdio.h>
main()
{
	char s[20];
	int i,c;

	printf("Enter a string\n");
	scanf(" %[^\n]",s);

	for(i=0,c=1;s[i];i++)
	{
		if(i!=0 && s[i]==' ')
			c++;

	}

	printf("The number of words present in given sentence is %d\n",c);
}
