#include<stdio.h>
main()
{
	int a[10],big,small,i,ele;

	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements..\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);

	printf("Before....\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");
	big=a[0];
	small=a[0];

	for(i=1;i<ele;i++)
	{
		if(a[i]>big)
			big=a[i];
		if(a[i]<small)
			small=a[i];		
	}

	printf("The biggest element in the given array=%d\n",big);
	printf("The smallest element in the given array=%d\n",small);

}
