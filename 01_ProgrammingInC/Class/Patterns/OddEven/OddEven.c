#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of lines you want to print \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i%2)!=0)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",1+2*(j-1));
			}	
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",2*j);
			}	
			
		}
		printf("\n");
	}

}
