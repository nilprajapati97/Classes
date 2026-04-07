#include<stdio.h>
main()
{
	int sum,num,i;
	printf("Enter the number \n");
	scanf("%d",&num);
	sum=0;
	for(i=num;i>0;i=i/10)
	{
		sum=sum+i%10;
	}
	printf("The sum of digits of the given number is =%d\n",sum);
}
