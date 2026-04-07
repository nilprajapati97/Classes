#include<stdio.h>
void delay(unsigned int);
main()
{
	int i;
	
	for(i=1;i<=100;i++)
	{
		printf("*");
		sleep(1);
	/*	printf("\b");
		printf(" ");*/
	}

}

void delay(unsigned int x)
{
	int i,j;
	for(i=1;i<=x;i++)
		for(j=0;j<1000000;j++);

}
