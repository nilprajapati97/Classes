#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("Enter the size of Diamond\n");
	scanf("%d",&n);
	printf("\n");
	k=0;
	for(i=1;i<=n;i++)
	{
		if(i<=(n+1)/2)
		{
			for(j=i;j<=(((n+1)/2)-1);j++)
				{
					printf(" ");
				}	
			for(j=1;j<=i+k;j++)
				{
					printf("*");
				}
			k++;
		}
		else
		{
			k--;
			for(j=1;j<=(i-(n+1)/2);j++)
				{
					printf(" ");
				}	
			for(j=1;j<=n-i+k;j++)
				{
					printf("*");
				}
		}
		printf("\n");
	}
}
