#include<stdio.h>
int ispalindrome(int);
void palindromedisplay(int);

main()
{
	int n;
	printf("Enter the number till you want to print palindrome\n");
	scanf("%d",&n);
//	printf("%d ",ispalindrome(n));
	palindromedisplay(n);
	
	printf("\n");
}

void palindromedisplay(int p)
{
	static int i;
	int c;
	if(i>p)
		return;
	else
	{
		c=ispalindrome(i);
		if(c==i)
			printf("%d ",i);
		i++;
		palindromedisplay(p);
	}
}

int ispalindrome(int n)
{
	static int rev=0;
	int c=rev;
	if(n==0)
	{
		rev=0;
		return c;
	}
	else
	{
		rev=rev*10+n%10;
		return(ispalindrome(n/10));

	}	

}











