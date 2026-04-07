#include<stdio.h>
int sumofdigits(int);
main()
{
	int n,sum;
	printf("Enter the number for which you want to find sum of digits\n");
	scanf("%d",&n);

	sum=sumofdigits(n);
	printf("Sum =%d\n",sum);
}
int sumofdigits(int n)
{
	static int sum;
	if(n==0)
		return 0;
	else
	{
		sum=n%10+sum;
		sumofdigits(n/10);
		return sum;
	}
}
