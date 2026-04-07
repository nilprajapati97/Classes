#include<stdio.h>
main()
{
	int i,j,k,l,n;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		l=4;
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k+l;
			l--;
		}
		printf("\n");
	}
}
/*			if(j!=1)
			{
			for(l=4;l>=(n-i+1);l--)
			{
				k=k+l;
			}	
			printf("%d ",k);
			}
			else
			printf("%d ",i);
*/
