#include<stdio.h>
main()
{
	char ch;
	printf("Enter any character \n");
	scanf("%c",&ch);
	ch=ch^1<<5;
	printf("The transformed case digit is=%c\n",ch);
}

