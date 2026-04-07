#include<stdio.h>
int reverse(int);
main()
{
	int n,rev;
	printf("Enter a number to reverse\n");
	scanf("%d",&n);

	rev=reverse(n);

	printf("Reverse =%d \n",rev);
}
int reverse(int n)
{
	static int rev;
	if(n==0)
		return 0;
	else
	{	
		rev=rev*10+n%10;
		reverse(n/10);
		return rev;
	}

}
