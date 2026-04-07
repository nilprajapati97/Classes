#include<stdio.h>
#include<limits.h>
main()
{

	int x=53,y=3;
	int p,q;

	p=x;
	q=0;

	while(p)
	{

		p=p-y;
		q++;
		if(p<y)
			break;
	}
	printf("Ans=%d  \n",q);


}
