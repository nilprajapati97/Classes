#include<stdio.h>
int big(const int*,const int);
main()
{
	int a[5],ele,i;

	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements of array\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);


	printf("\nThe largest value present in array =%d\n",big(a,ele));

}
int big(const int *s,const int ele)
{
	static int i,num;
	if(i<=ele-1)
	{
		if(i==0)
			num=s[0];
		else
		{
			if(*s>num)
				num=*s;
		}
		i++;
		return big(s+1,ele);
	}
	else
		return num;
}








