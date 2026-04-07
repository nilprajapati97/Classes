#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the size of Diamond\n");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		if(i<=(n+1)/2)
		{
			for(j=i;j<=(((n+1)/2)-1);j++)
				{
					printf(" ");
				}	
			for(j=1;j<=i;j++)
				{
					printf("* ");
				}
		}
		else
		{
			
			for(j=1;j<=(i-(n+1)/2);j++)
				{
					printf(" ");
				}	
			for(j=1;j<=n-i+1;j++)
				{
					printf("* ");
				}
		}
		printf("\n");
	}
}
