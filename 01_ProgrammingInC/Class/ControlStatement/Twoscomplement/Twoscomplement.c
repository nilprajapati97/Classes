#include<stdio.h>
main()
{
	int num,op1;
	
	printf("Enter a number \n");
	scanf("%d",&num);

abc1:	printf("Select 1 or 2 to choose a method for Two's complement using\n1) Arithmetic Operation \n2) Bitwise Operation\n");
	scanf("%d",&op1);
	
	if((op1==1)||(op1==2))
	{
		(2-op1)?(num=-(num)):(num=~num+1);
	}
	else
	{
		printf("Invalid Option Selected\n");
		goto abc1;
	}	
abc:
	printf("Choose the option with which you want to display output \n1)Binary Format\n2)Decimal Format\n");
	printf("3)HexaDecimal Format\n4)Octal Format\n");
	scanf("%d",&op1);
	
	if(op1==1)
	{
		printf("The Binary format of one's complemented number is\n");
		for(op1=31;op1>=0;op1--)
		{
			printf("%d",(num>>op1)&1);
		}

	}

	else if(op1==2)
	{
		printf("The Decimal format of one's complemented number is\n%d",num);
	}

	else if(op1==3)
	{
		printf("The HexaDecimal format of one's complemented number is\n %x",num);
	}

	else if(op1==4)
	{
		printf("The Octal format of one's complemented number is\n %o",num);
	}

	else
	{
		printf("Invalid Option selected \n");
		goto abc;
	}

	printf("\n");
	
}
