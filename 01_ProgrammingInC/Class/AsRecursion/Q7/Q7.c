#include<stdio.h>
void prime(int);
//int isprime(int,int);
int isprime(int);

main()
{
	int n,c;
	printf("Enter the limit till you want to print prime\n");
	scanf("%d",&n);

	prime(n);
	printf("\n");
}

void prime(int n)
{
	static int i=2;
	int c;
//	if(n==i)
	if(n==1)
		return;
	else
	{	
//		c=isprime(n,2);
		c=isprime(n);
		if(c==0)
//			printf("%d ",i);
			printf("%d ",n);
//		i++;
		prime(n-1);

	}
}

//int isprime(int num,int j)
int isprime(int num)
{
	static int j=2;
	if(j==num)
	{
		j=2;
		return 0;
	}
	if(num%j==0)
	{
		j=2;
		return -1;
	}
	else
	{	
//		return(isprime(num,j+1));
		j++;
		return(isprime(num));
	}
}











