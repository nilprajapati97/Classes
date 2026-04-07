#include<stdio.h>
main()
{
	int a[10],ele,product,sum,i;

	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements of array \n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);		//Representation of Array

	printf("Before-----------\n");
	for(i=0;i<ele;i++)
		printf("%d ",i[a]);		//Representation of Array


	for(i=0,sum=0,product=1;i<ele;i++)
	{
		if((*(a+i)%2)==0)
			sum+=a[i];
		else
			product*=a[i];
	}


	printf("\n The sum of even numbers=%d",sum);
	printf("\n The product of odd numbers=%d\n",product);

}
