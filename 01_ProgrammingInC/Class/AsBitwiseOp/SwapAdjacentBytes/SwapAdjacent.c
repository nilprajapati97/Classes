#include<stdio.h>
main()
{
	unsigned short int x;
	unsigned short temp1,temp2,temp3,temp4;
	temp1=temp2=0x00;
	printf("Enter the value you want to swap:\n");
	scanf("%x",&x);
	temp1=x&0xF0F0;
	temp2=x&0x0F0F;
	temp3=temp1;
	temp1=(temp1<<8)|(temp3>>8); // Swaping of even Nibbles
	temp4=temp2;
	temp2=(temp2>>8)|(temp4<<8);
	x=temp1|temp2;
	printf("The swapped values are =%x\n",x);
	
}
