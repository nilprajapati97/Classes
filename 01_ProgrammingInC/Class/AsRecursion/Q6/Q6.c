#include<stdio.h>

void thankyouparmar(int);
void display(int);

main()
{
	int n;
	printf("Enter a Number to display\n");
	scanf("%d",&n);

	display(n);
	printf("\n");

}


void display(int n)
{
	if(n==0)
		return;
	else
	{
		display(n/10);
		thankyouparmar(n%10);
	}


}

void thankyouparmar(int a)
{
	switch(a)
	{
		case 0:printf("Zero ");break;
		case 1:printf("One ");break;
		case 2:printf("Two ");break;
		case 3:printf("Three ");break;
		case 4:printf("Four ");break;
		case 5:printf("Five ");break;
		case 6:printf("Six ");break;
		case 7:printf("Seven ");break;
		case 8:printf("Eight ");break;
		case 9:printf("Nine ");break;

	}



}

