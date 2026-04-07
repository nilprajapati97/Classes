// 9th Problem


#include<stdio.h>
main()
{
	int a[10],ele,i,j,count;

	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements of Array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("The duplicate elements are existed in array\n");
	for(i=0;i<ele-1;i++)
	{
		count=1;
		for(j=i+1;j<ele;j++)
		{
			if(a[i]==a[j] && (i==0 || a[j]!=a[0] ))
			{
				count++;
				a[j]=a[0];
			}
		}
		if(count>1)
			printf("%d-------%d times \n",a[i],count);
		
	}
}
