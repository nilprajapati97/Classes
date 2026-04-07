#include<stdio.h>
main()
{
	char a[10];
	int i,ele,j;
	
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the string \n");
	for(i=0;i<ele;i++)
		scanf(" %c",a+i);

	printf("Before-----------\n");
	for(i=0;i<ele;i++)
		printf("%c ",i[a]);	//Representation of Array in different format

	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]==a[j])
				a[j]=-1;
		}

	}

	printf("\nAfter-------------\n");
	for(i=0;i<ele;i++)
	{
		if(a[i]==-1)
			continue;
		else
			printf("%c ",*(a+i));
	}
	printf("\n");
}
