#include<stdio.h>
main()
{
	int a[10],i,j,ele,max,max_index,k;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the column size for histogram\n");	// Histogram inputs
	for(i=0;i<ele;i++)
	{
		printf("The %d index size= ",i+1);
		scanf("%d",&a[i]);
	}
	max=0;
	max_index=0;
	for(i=0;i<ele;i++)					//Maximum value in an array
	{
		if(max<a[i])
		{
			max=a[i];
			max_index=i;
		}
	}
	printf("\n");
	printf("The maximum value in the given array is %d\n",a[max_index]);
	
	//Histogram Calculations
	
	for(i=0;i<ele;i++)					//Space Corrected Histogram
	a[i]=a[i]-max;
	
/*	printf("\n");
	for(i=0;i<ele;i++)					//Space Corrected Histogram
	printf("%d",a[i]);
	printf("\n");*/
	
	for(i=0;i<max;i++)					//Histogram printing
	{
		printf(" ");
			for(j=0;j<ele;j++)
			{
				
				if(a[j]<0)
				{
					for(k=0;k<9;k++)
					printf(" ");
				//	printf("%d",a[j]);
					a[j]++;
				}
				else if(a[j]==0)
				{	
					for(k=0;k<7;k++)
					printf(" ");
					printf("||");
				}	
					
			}

		printf("\n");
	}


	
	printf("\n->");						//Histogram Output
	for(i=0;i<ele;i++)
	{
		
		printf("%*d",9,i+1);
	}
	printf("\n");
	
}
