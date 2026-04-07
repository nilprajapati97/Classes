#include<stdio.h>
main()
{
	int n;
	printf("Enter the number to check for positive or negative\n");
	scanf("%d",&n);
	if((n>>31)&1)
	printf("The number is negative\n");
	else
	printf("The number is positive\n");
}
