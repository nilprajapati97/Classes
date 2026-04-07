#include<stdio.h>
main()
{
	int i,j;
	printf("The list of prime numbers between 1-100 is\n");
	for(i=2;i<=100;i++)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
				break;
		}
		
		if(j==i)
		printf(" %d ",i);
		

	}
	printf("\n");
}
