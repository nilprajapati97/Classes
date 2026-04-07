#include<stdio.h>
main()
{
	int i,j,rev;
	printf("The list of numbers which are Palindrome between 1-1000 is \n");
	for(i=10;i<=1000;i++)
	{
		rev=0;
		for(j=i;j>0;j=j/10)
		{
			rev=(rev*10)+j%10;
		}
		if(rev==i)
		printf("%d\t",i);

	}
	printf("\n");

}
