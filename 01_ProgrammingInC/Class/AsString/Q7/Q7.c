#include<stdio.h>
main()
{

	char s[20];
	int i,j;
	
	printf("Enter a string \n");
	scanf(" %[^\n]",s);

	for(i=0;s[i];i++);

	for(i=i-1,j=0;j<i;j++,i--)
	{
		if(s[i]!=s[j])
			break;
	}
		if(i<=j)
			printf("The input string is palindrome\n");
		else
			printf("The input string is not a palindrome\n");


}
