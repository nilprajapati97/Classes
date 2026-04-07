#include<stdio.h>
main()
{
	int a[10],i,j,ele,temp;
	
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements \n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);

	printf("Before------------\n");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));

	for(i=0,j=ele-1;i<j;i++,j--)
	{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
	}

	printf("\n");
	printf("After------------\n");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");


}
