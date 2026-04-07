//11.c


#include<stdio.h>
main()
{
	int a[13],i,j,ele,c,rep,s;
	int slot1[13],slot2[12],p,q,k;	
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);

	printf("Before----------\n");
	for(i=0;i<ele;i++)
		printf("%d ",i[a]);
	
	for(i=0;i<ele;i++)
		slot1[i]=a[i];
	c=0;
	for(i=0;i<ele-c;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(slot1[i]==slot1[j])
			{
				c++;				
				//printf("\n i=%d slot[1]=%d c=%d\n",i,slot1[i],c);
				for(k=j;k<ele;k++)
				{
					slot1[k]=slot1[k+1];
					//rep=1;
					
					//for(;slot1[k]==slot1[k+rep];rep++);
					
					//slot1[k]=slot1[k+rep];
					
					//s=s+rep-1;
//11.c					//printf("%d\n",s);
				}
				j--;
			}
		}
	}
	p=ele-c;
	printf("\n %d \n",p);

	for(i=0,q=0;i<p;i++)
	{
		c=1;
//		printf("Entering loop Array\n");
		for(j=0;j<ele;j++)
		{
//			printf("Entering loop Array2\n");
			if( slot1[i]==a[j] )
			{
				if(c==1)
				{
					c=-1;
					continue;
				}
				else
					slot2[q++]=slot1[i];
			}
		}		
	}


//11.c
//	printf("\nc=%d \n",c);

	printf("The Non repeating array is...\n");
	for(i=0;i<p;i++)
		printf("%d ",slot1[i]);
	printf("\n");

	printf("The Repeating array is...\n");
	for(i=0;i<q;i++)
		printf("%d ",slot2[i]);
	printf("\n");
















/*	while(i<ele)
	{
		num_count=1;
		for(j=0;j<ele;j++)
		{
			if(j==i)
				continue;
			else
			{
				if(a[i]==a[j])
				{
					c++;
					if(num_count!=1)
					{
						temp=a[i];
						a[ele-1+c-1]=a[temp]		
					}
					
				}
				
			}
		}
		
	}



	printf("After----------\n");
	for(i=0;i<ele;i++)
		printf("%d ",i[a]);*/

}
