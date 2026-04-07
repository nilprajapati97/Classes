#include<stdio.h>
main()
{
	int num,i;
	printf("Enter a number to convert to binary\n");
	scanf("%x",&num);
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
	}
	printf("\n");
	
}
