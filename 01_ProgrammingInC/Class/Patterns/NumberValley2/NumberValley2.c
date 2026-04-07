#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=n-2*(i-1)+1;j>=1;j--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	j=1;
	for(i=1;i<=2*n-1;i++)
	{
		printf("%d",j);
		if(i<n)
		j++;
		else
		j--;
	}
	
}
