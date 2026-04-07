#include<stdio.h>
main()
{
	int i,j,c,ele,k,temp,scount;
//	int a[13]={10,2,4,5,2,1,3,4,6,5,8,9,2};
//	int a[13]={1,1,1,2,2,2,3,3,3,4,4,4,5};
	int a[13]={1,1,1,1,1,1,1,1,1,1,1,1,2};
	ele=sizeof(a)/sizeof(a[0]);

/*
	printf("Enter the elements of array\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);


	printf("The Array before=\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");*/
	i=0;
	c=0;
	scount=0;
	while(i<ele-c)
	{
		scount=0;
		
		for(j=0;j<ele-c-scount;j++)
		{
			if( i==j /*&& count==1*/)
			{
					printf("\n a[%d]=%d\n",i,a[i]);
					continue;
					//count=0;
			}
			else
			{
				if(a[i]==a[j])
				{	
				
					for(k=ele-1-scount-c;k>=j;k--)
					{
						if(a[j]!=a[k])	
						{
							printf("\nThe swap between a[%d]=%d, a[%d]=%d\n",j,a[j],k,a[k]);
							temp=a[j];
							a[j]=a[k];
							a[k]=temp;
							break;
						}
						else if((j+1)!=k)
							scount++;
			
					}	
					c++;	
					printf("\n c=%d \n",c);

				}
			}
		}
		i++;
	}

	printf("The Non repeated elements in the array are\n");
	for(i=0;i<ele-c;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("The Repeated elements in the array are\n");
	for(;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}
