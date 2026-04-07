#include<stdio.h>
int fact(int);
main()
{
	int num,ret;
	printf("Enter a number to find factorial\n");
	scanf("%d",&num);
	ret=fact(num);
	printf("The factorial of %d is %d\n",num,ret);
}
int fact(int n)
{
	if(n==1)
		return 1;
	else	
		return(n*fact(n-1));

}
