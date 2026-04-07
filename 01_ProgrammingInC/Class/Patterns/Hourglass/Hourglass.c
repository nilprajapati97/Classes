#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		if(i<=(n+1)/2)
		{
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			for(j=1;j<=(((n+1)/2)-i+1);j++)
			{
				printf("* ");
			}
		}
		else
		{
			for(j=0;j<n-i;j++)
			{
				printf(" ");
			}
			for(j=1;j<=i-n/2;j++)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
