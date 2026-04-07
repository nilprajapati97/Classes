#include<stdio.h>
main()
{
printf("In main i=%d\n",i);
}
int i;

void fun()
{
 extern int i=10;
 printf("In fun i=%d\n",i);
}


