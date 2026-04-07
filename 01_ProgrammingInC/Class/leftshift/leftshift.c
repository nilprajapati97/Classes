#include<stdio.h>
main()
{
	int hex,n;
	printf("\n Entet the number to be shifted\n");
	scanf("%x",&hex);
	printf("Enter the places to be shifted\n");
	scanf("%d",&n);
	hex=hex<<n;
	printf("The shifted number is %x\n",hex);
}
