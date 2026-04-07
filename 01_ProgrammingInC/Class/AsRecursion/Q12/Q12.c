#include<stdio.h>
void reverse_array(int *,int);
main()
{

	int a[6],ele,i,n;

	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements into the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);

	printf("Before---------------\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);


	reverse_array(a,ele-1);



	printf("After---------------\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
}

void reverse_array(int *p,int ele)
{
	static int i;
	if(i<ele)
	{
		p[i]=(p[i]=p[i]^p[ele])^(p[ele]=p[i]^p[ele]);	
		i++;
		reverse_array(p,ele-1);
	}


}
