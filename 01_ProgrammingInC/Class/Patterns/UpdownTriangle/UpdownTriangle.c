#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of lines greater than 3 \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		
}
