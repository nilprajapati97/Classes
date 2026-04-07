#include<stdio.h>
main()
{
	int a[100],i,n,sum;
	printf("Enter the number till you want to print the sum of series....\n");
	scanf("%d",&n);
	
	for(i=1,sum=0;i<=n;i++)
	{
		a[i-1]=i*i;
		sum=sum+a[i-1];
	}

	printf("The sum of given series is\n %d",a[0]);
	for(i=1;i<n;i++)
		printf(" + %d ",a[i]);
	printf("\n");
	printf(" Sum=%d \n",sum);

}
