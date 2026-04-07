#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of size for the triangle\n");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		if(i<=((n+1)/2))
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",j);
				if(j!=i)
				printf("*");
			}
		}
		
		else
		{
			for(j=1;j<=n-i+1;j++)
			{
				printf("%d",j);
				if(j!=n-i+1)
				printf("*");
			}
		}
		printf("\n");
	}
}

