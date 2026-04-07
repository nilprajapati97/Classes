#include<stdio.h>
main()
{
	int i,c,num;
	printf("Enter a number \n");
	scanf("%i",&num);

	for(i=sizeof(int)*8-1,c=0;i>=0;i--)
	{
		if(num>>i&1)
		c++;
	}

	printf("The number of bits set in the num=%x is %d\n",num,c);



}
