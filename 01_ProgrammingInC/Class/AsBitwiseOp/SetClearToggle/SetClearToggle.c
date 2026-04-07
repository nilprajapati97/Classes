#include<stdio.h>
main()
{
	char choice;
	int n,x;
	printf("Enter the number:\n");
	scanf("%d",&n);
	fflush(stdin);
	printf("Select the appropriate function:\na) Set \nb) Clear \nc) Toggle\n");
	scanf("  %c",&choice);
	printf("Enter the bit poisition at which you want to perform the following function:\n");
	fflush(stdin);
	scanf("%d",&x);
	switch(choice)
	{
		case 'a':
			n=n|(1<<x); // 1 left shifted by x position	
		break;
		case 'b':
			n=n&(~(1<<x));
		break;
		case 'c':
			n=n^(1<<x);
		break;
	}
	printf("The updated value of your number is=%d,%x\n ",n,n);
}
