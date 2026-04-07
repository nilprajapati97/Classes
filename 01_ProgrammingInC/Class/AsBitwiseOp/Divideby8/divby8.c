#include<stdio.h>
main()
{
	int j,n;
	printf("Enter anyn number to check if divisible by 8 or not\n");
	scanf("%d",&n);
	j=n&0x07;
	if(!j)
	printf("The given number is divisible by 8");
	else
	printf("The given number is not divisible by 8");
	printf("\n");
}
