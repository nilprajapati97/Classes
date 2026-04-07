#include<stdio.h>
main()
{
	int i,a[8],ele,pos,temp;

	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	printf("Enter Position number \n");
	scanf("%d",&pos);

	
	printf("Before----------\n");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");


	for(i=0;i<ele-1;i++)
	{
		if(i>=pos)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=a[i];	
		}
	}	
	printf("After----------\n");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));

	printf("\n");
		

}
