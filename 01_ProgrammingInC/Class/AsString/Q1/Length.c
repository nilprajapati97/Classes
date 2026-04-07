#include<stdio.h>
main()
{
	char a[20];
	char *p=a;
	int *ptr;
	int i;

//	printf("%u %u k=%u\n",&i,&j,&k);

	printf("Enter the string \n");
	scanf(" %[^\n]",a);

	for(i=0;*p;i++,p++);

	printf("The Length of %s is :%d\n",a,i);


}
