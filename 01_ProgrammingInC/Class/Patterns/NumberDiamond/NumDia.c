#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	k=n/2;
	for(i=1;i<=n;i++)
	{
		if(i<=((n+1)/2))
		{
			for(j=1;j<=(n+1)/2-i;j++)
			{
				printf(" ");
			}
			for(j=1;j<=2*i-1;j++)
			{
				printf("%d",j);
			}
		}
		else
		{
			for(j=1;j<=i-(n+1)/2;j++)
			{
				printf(" ");
			}
			for(j=1;j<=2*k-1;j++)
			{
				printf("%d",j);
			}
			k--;
			
		}
		printf("\n");	
	}
}
