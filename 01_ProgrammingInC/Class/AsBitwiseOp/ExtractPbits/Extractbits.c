#include<stdio.h>
main()
{
	int p,n,m,temp,i;
	printf("Enter The number to extract bits from :\n");
	scanf("%x",&m);
	printf("Enter the position from which you want to extract bits \n");
	scanf("%d",&n);
	printf("Enter the number of bits you want to extract\n");
	scanf("%d",&p);
	temp=0x00;
	for(i=1;i<=p;i++)
	{
		temp=(0x01<<n-i+1)|temp;
	}
	m=m&temp;
	m=m>>(n-p+1);
	printf("The extracted bits are=%x\n",m);
	
	
}
