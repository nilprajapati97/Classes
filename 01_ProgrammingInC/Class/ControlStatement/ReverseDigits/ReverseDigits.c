#include<stdio.h>
main()
{
	int i,num,rev;
	printf("Enter a number \n");
	scanf("%d",&num);
	rev=0;
	for(i=num;i>0;i=i/10)
	{
		rev=rev*10+i%10;
	}
	printf("The reverse of applied input is=%d\n",rev);
}
