#include<stdio.h>
main()
{
	int i,j;
	printf("Enter the numbers you want to compare\n");
	scanf("%d%d",&i,&j);
	(i^j)?printf("The two numbers are not same\n"):printf("The two numbers are same\n");
}
