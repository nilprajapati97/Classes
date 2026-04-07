#include<stdio.h>
main()
{
	int i,j,n;
	char ch='A';
	printf("Enter the number of lines to be printed \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%c",ch);
		ch++;
	}

	ch--;

	for(i=1;i<=n-1;i++)
	{
		ch--;
		printf("%c",ch);
	}
	printf("\n");
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		for(j=0;j<(2*(i-1)-1);j++)
		{
			printf(" ");
			
		}
		for(j=0;j<=n-i;j++)
		{
			ch--;
			printf("%c",ch);
			
		}
		printf("\n");
	}
}
