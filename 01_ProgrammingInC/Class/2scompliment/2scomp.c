#include<stdio.h>
main()
{
//	unsigned int i;
	int i;
	signed int d;
	printf("Enter any signed number \n");
	scanf("%d",&i);
	d=~i;
	printf("\nd=%hu",d);
//	d=(~i)+(0x00000001);
//	printf("\n The 2's compliment of number is=%x",d);
}
