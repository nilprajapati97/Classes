#include<stdio.h>
main()
{
	char ch;
	printf("Enter and Character to be converted from upper to lower or vice versa\n");
	scanf("%c",&ch);
	printf("\n");
	if(!(ch&0x20))
	{	
		ch=ch|0x20;
		printf("The converted character is %c\n",ch);	
	}
	else
	{
		ch=ch&0xDF;
		printf("The converted character is %c\n",ch);
	}
	
}
