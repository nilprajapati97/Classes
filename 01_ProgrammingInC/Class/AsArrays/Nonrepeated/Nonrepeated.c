//10.c

#include<stdio.h>
main()
{	int a[10],i,j,ele,k;
	
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements\n");	
	for(i=0;i<ele;i++)
		scanf("%d",a+i);

	printf("Before--------\n");
	for(i=0;i<ele;i++)
		printf("%d ",i[a]);
	printf("\n");

	printf("The Non repeated values in given array is\n");
	

	i=0;
	while(i<ele)
	{
		for(j=0;j<ele;j++)
		{
			if(i==j)
				continue;
			else
				if(a[i]==a[j])
					break;
		}
		if(j==ele)
			printf("%d ",a[i]);
		i++;
	}
	printf("\n");
}
