#include<stdio.h>
int sumofdivisors(int n);
main()
{
	int n,sum;
	printf("Enter any number\n");
	scanf("%d",&n);

	
	sum=sumofdivisors(n);
	printf("The sum of divisors are %d\n",sum);

}

int sumofdivisors(int n)
{
	static int num=1,sum;
	if(num==n-1)
	{
		printf("%d ",sum);
		return sum;
	}
	else
	{
		if(n%num==0)
			sum+=num;
		num++;
		return(sumofdivisors(n));

	}



}




