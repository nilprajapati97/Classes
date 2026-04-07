#include<stdio.h>
int factorial(int);
main()
{
	int i,j,n,term;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i-1;j++)
		{
			term=factorial(i-1)/(factorial(i-1-j)*factorial(j));
			printf("%d ",term);
		}
		printf("\n");
	}
}
int factorial(int x)
{
	int i,sum;
	sum=1;
	for(i=x;i>=1;i--)
	{
		sum=sum*i;
	}
	return(sum);
}
