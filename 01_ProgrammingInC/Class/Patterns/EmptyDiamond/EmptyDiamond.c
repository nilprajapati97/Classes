#include<stdio.h>
main()
{
	int i,j,n,m,o,offset,print_lines,no_lines,lower_j,upper_j,s,k;
	printf("Enter the number of lines \n");
	scanf("%d",&n);
	printf("Enter the offset limit\n");
	scanf("%d",&offset);
	m=0;
	no_lines=2*((n+1)/2-offset)+1;
	print_lines=-1;
	s=-1;
	k=1;
	for(i=1;i<=n;i++)
	{
		printf("*");
	}
		printf("\n");
	for(i=2;i<=n-1;i++)
	{
		if(i<=((n+1)/2))
		{
			m=(n+1)/2-i+1;
			o=2*(i-1)-1;
		}
		else
		{
			m=i-(n+1)/2+1;
			o=o-2;
		
		}

		for(j=1;j<=m;j++)
		printf("*");

		if(offset==i)
		{
			s=1;
			lower_j=(o+1)/2;
			upper_j=(o+1)/2;
		}
		
/*		else if(k==1&&s==1)
		{
			print_lines=1;
			k++;
		}*/
		if(no_lines+1==k)
		{
			print_lines=-1;
			s=0;
		}
		if(k<=no_lines&&(s==1))
		{
			if(i<=(n+1)/2)
			{
				lower_j=((o+1)/2)-(k-1);
				upper_j=((o+1)/2)+(k-1);
			}				
			else
			{
				lower_j=((o+1)/2)-(no_lines-k);
				upper_j=((o+1)/2)+(no_lines-k);
			}
			print_lines=1;	
			k++;
		}
				

		for(j=1;j<=o;j++)
		{
			if((lower_j<=j&&j<=upper_j)&&(print_lines==1))
			{
				printf("*");
			}
			else
			printf(" ");
		}

		for(j=1;j<=m;j++)
		printf("*");
		
		printf("\n");
		
		
	}
	for(i=1;i<=n;i++)
	{
		printf("*");

	}
}
