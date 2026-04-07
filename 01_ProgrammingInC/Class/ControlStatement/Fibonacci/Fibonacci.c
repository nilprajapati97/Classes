#include<stdio.h>
main()
{
	int i,a,c,b;
	printf("The Fibonacci Series for 0-50 is given as \n");
	a=0;b=1;i=0;
abc:	
	c=a+b;
	a=b;
	b=c;
	printf("%d \t",c);
	i++;
	if(i<=50)
		goto abc;
}
