#include<stdio.h>
void fibonacci(int);
main()
{
	int n;
	
	printf("Enter the upper limit for fibonacci sreies\n");
	scanf("%d",&n);

	fibonacci(n);
	printf("\n");
}
void fibonacci(int n)
{
	static c,a=1,b=0;
	c=a+b;
	a=b;
	b=c;
	if(c<=n)
	{	
		printf("%d ",c);
		fibonacci(n);
	}
	else
		return;
}
