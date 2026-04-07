#include<stdio.h>
main()
{
	char ch;
	int i;
	int j,n,l,temp;
	printf("Enter the number whose value you want to shift\n");	
	scanf("%x",&n);
	
	printf("Enter l/r for Left shifting or Right shifting respectively \n");
	scanf(" %c",&ch);
	fflush(stdin);
	printf("Enter the number of rotations.\n");
	scanf("%d",&i);
	l=0x00;
	if(ch=='r')
	{

		for(j=1;j<=i;j++)
		{
			l=(l<<1)+0x01;
		}	

		temp=n&l;
		n=(n>>i);
		temp=temp<<(32-i);
		n=n^temp;
	}
	if(ch=='l')
	{
		for(j=1;j<=i;j++)
		{
			l=(l>>1)+0x80;
		}	

		temp=n&l;
		n=(n<<i);
		temp=temp>>(32-i);
		n=n^temp;
	}
	else
	{
		printf("Invalid Choice\n");
	}
	printf("The rotated value is %x \n",n);
}
