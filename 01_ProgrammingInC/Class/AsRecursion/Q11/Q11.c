#include<stdio.h>
void print_binary(int);
void reverse_binary(int *);
main()
{
	int num;
	printf("Enter a number to print in binary\n");
	scanf("%d",&num);

	print_binary(num);
	reverse_binary(&num);
	print_binary(num);

	printf("\n");

}

void print_binary(int num)
{
	int i;
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
}

void reverse_binary(int *p)
{
	static int i=0,j=sizeof(int)*8-1;
	if(i<j)
	{
		if((*p>>i&1)!=(*p>>j&1))
		{
			*p=*p^1<<i;
			*p=*p^1<<j;
		}
		i++;
		j--;
		reverse_binary(p);
	}
}































