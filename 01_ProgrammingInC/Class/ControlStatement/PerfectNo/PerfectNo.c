#include<stdio.h>
main()
{
	int div,num,i;
	printf("Enter a number to check if its a perfect number \n");
	scanf("%d",&num);
	div=0;
	for(i=1;i<=num-1;i++)
	{
		if(num%i==0)
		{
			div=div+i;
		}
	}
	
	if(div==num)
	printf("The given number is a perfect number \n");
	else
	printf("The given number is not a perfect number\n");
}
