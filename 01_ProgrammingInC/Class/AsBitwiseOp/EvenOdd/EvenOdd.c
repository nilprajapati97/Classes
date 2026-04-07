#include<stdio.h>
main()
{
	int n;
	printf("Enter the number to check for even or odd\n");
	scanf("%d",&n);
	if(n&1)
	printf("the number is odd\n");
	else
	printf("the number is even\n");

}
