#include<stdio.h>
void isperfect(int);
main()
{
	int n;
	printf("Enter a number to check for Perfect or not\n");
	scanf("%d",&n);
	
	isperfect(n);


	printf("\n");
}
void isperfect(int n)
{
	static int sum,i=1;

	if(i==n)
		return;
	else
	{
		if(n%i==0)
			sum+=i;
		i++;
		isperfect(n);
		i--;
		if(i==1)
		{
		if(sum==n)
			printf("Number is perfect Number\n");
		else
			printf("Number is not a perfect number\n");
		}
	}
}
