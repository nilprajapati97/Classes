#include<stdio.h>
main()
{
	int n,i,j,k,l,temp;
	l=0x01;
	printf("Enter the number in Hexa decimal\n");
	scanf("%x",&n);
	printf("Enter the position from which you want to delete the bits\n");
	scanf("%d",&i);
	printf("Enter the number of bits that you want to delete\n");
	scanf("%d",&k);
	for(j=2;j<=i-1;j++)	// Mask Bit Generator
	{
		l=(l<<1)+0x01;
	}
	temp=n;
	temp=(temp&l);		//Masking the last Digits
	n=(n>>k);		//Shift the Bits to new position
	n=(n&(~l));		// Mask the bits it not required position
	n=(n|temp);		// Add the bits with present bit
	printf("The new value of variable is=%x\n",n);
}
