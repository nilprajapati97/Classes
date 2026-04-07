#include<stdio.h>
main()
{
	int i,j,n;
	char c='A';
	printf("Enter the number of lines \n");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
