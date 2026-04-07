#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of lines\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=i-1;j>0;j--)
		{
			printf("%d",j);
		}
		printf("%d",0);
		for(j=1;j<=i-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
			
	

	}





}
