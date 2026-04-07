#include<stdio.h>
main()
{
	int i,j;
	printf("Enter the values of number\n");
	scanf("%d%d",&i,&j);
	printf("The values of i=%d,j=%d\n",i,j);
	i=(i=i^j)^(j=i^j);
	printf("The values of i=%d,j=%d\n",i,j);
}
