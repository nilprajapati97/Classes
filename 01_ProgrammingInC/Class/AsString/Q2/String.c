#include<stdio.h>
main()
{
	char a[20],b[20]={0};
	int i;
	
	printf("Enter the string \n");
	scanf(" %[^\n]",a);

	for(i=0;a[i];b[i]=a[i],i++);

	printf("The data in buffer string is %s\n",b);
}
