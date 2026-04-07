#include<stdio.h>
main()
{
	int i,j;
	printf("The Multiplication Table from 10-20 is \n");
	for(i=10;i<=20;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf(" %d * %d = %d \n",i,j,i*j);
		}
		printf("\n--------------------------\n");

	}
}
