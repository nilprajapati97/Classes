#include<stdio.h>
main()
{
	int i,f,num;
	printf("Enter the number whose factorial you have to determine \n");
	scanf("%d",&num);
	f=1;
	if(num>=0)
	{
		for(i=num;i>=1;i--)
		{
			f=f*i;
		}
		printf("Your factorial is =%d\n",f);
	}
	else
	printf("Your Factorial is =%d",f);
}
