#include<stdio.h>
main()
{
	int i,j,rev;
	printf("The list of Armstrong Number between 1-500 is \n");
	
	for(i=1;i<=500;i++)
	{
		rev=0;
		for(j=i;j>0;j=j/10)
		{
			rev=(j%10)*(j%10)*(j%10)+rev;
		}
		
		if(i==rev)
		printf(" %d ",i);



	}
	printf("\n");





}
