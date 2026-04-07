#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i;

	printf("Enter the first string\n");
	scanf(" %[^\n]",s1);
	printf("Enter the second string\n");
	scanf(" %[^\n]",s2);

	for(i=0;s1[i];i++)
		if(s1[i]!=s2[i])
			break;

	if(s1[i]==s2[i])
		printf("Both the strings are equal\n");

	else
		printf("Both the strings are not equal\n");

}
