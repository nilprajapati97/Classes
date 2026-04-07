#include<stdio.h>
main()
{
	int n;
	printf("Enter the number to check for divisibility\n");
	scanf("%d",&n);
	if(n&1)
	printf("The number is not divisible by 2\n");
	else
	printf("The number is divisible by 2\n");

}
