#include<stdio.h>
main()
{
	int i,j;
	for(i=2;i<1000;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(j==i)
		{
			for(j=2;j<i+2;j++)
				if((i+2)%j==0)
					break;
			if(j==i+2)
			{
				printf("%d, %d\n",i,i+2);
			}
		}
	}
}
