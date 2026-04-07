#include<stdio.h>
main()
{
	int a[10],count,i,j,ele;
	
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements.......\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);

	printf("Before------------\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");

	for(i=0,count=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
			if(a[i]%j==0)
				break;
		if(a[i]==j)
			count++;
	}

	printf("The number of primes present in a the given array is=%d\n",count);

}
