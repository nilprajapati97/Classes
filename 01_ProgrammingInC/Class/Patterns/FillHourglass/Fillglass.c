#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	printf("\n");
	k=((n-1)/2)-1;
	for(i=1;i<=n;i++)
	{
		if(i<=(n+1)/2)
		{
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			for(j=1;j<=(n-(2*(i-1)));j++)
			{
				printf("*");
			}
		}
		
		else
		{
			for(j=0;j<n-i;j++)
			{
				printf(" ");
			}
			for(j=1;j<=i-k;j++)
			{
				printf("*");
			}
			k--;
		}
		printf("\n");
	}
}
