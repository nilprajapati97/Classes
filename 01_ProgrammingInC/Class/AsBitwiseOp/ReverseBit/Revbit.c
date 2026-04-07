#include<stdio.h>
main()
{
	int i,j,k,l,m,n;
	k=0x01;
	printf("Enter the number to be Reversed\n");
	scanf("%x",&i);
	l=i;
	m=0x00;
	n=0;
	for(j=31;j>=1;j=j-2)
	{
		l=i&k;
		l=l<<(j-n);
		m=m|l;
		k=k<<1;		
	}

	for(j=2;j<=31;j=j+2)	
	{
		l=i&k;
		l=l>>(j);
		m=m|l;
		k=k<<1;		
	}
	printf("The new reversed bit is=%x \n",m);
	
}
