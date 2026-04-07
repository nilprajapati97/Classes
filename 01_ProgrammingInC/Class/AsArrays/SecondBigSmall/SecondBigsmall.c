#include<stdio.h>
#include<limits.h>
main()
{
	int a[10],big,small,i,ele,prev,prev1,m,n,p,q;

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
	m=p=0;
	n=q=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
			p=i;
		}
		if(a[i]<small)
		{
			small=a[i];
			q=i;	
		}
		
	}
/*	
	prev=1<<31;
	prev1=INT_MAX;*/

	if(p==0)
		m=p+1;
	else
		m=p-1;
	if(q==0)
		n=q+1;
	else
		n=q-1;
	prev=a[m];
	prev1=a[n];
	for(i=0;i<ele;i++)
	{
		if(i==p)
			continue;
		else
		{
			if(a[i]>prev)
				prev=a[i];
		}

	}
	for(i=0;i<ele;i++)
	{
		if(i==q)
			continue;
		else
		{
			if(a[i]<prev1)
				prev1=a[i];
		}

	}



	printf("The biggest element in the given array=%d\n",big);
	printf("The smallest element in the given array=%d\n",small);
	printf("The second biggest element in the given array=%d\n",prev);
	printf("The second smallest element in the given array=%d\n",prev1);

}
