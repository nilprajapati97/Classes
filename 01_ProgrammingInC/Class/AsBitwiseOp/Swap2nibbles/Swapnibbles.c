#include<stdio.h>
main()
{
 	int n;
	printf("Enter the number whose first and last nibbles you want to swap\n");
	scanf("%d",&n);
	n=(n&0x0FFFFFF0)^((n>>28)&15)^((n<<28)&0xf0000000);
	printf("The swapped nibble values is=%x \n",n);

}
