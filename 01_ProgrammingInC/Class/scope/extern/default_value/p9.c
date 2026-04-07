#include<stdio.h>
main()
{
printf("In main i=%d\n",i);
}
int i=10;

void fun()
{
 extern int i;
 printf("In fun i=%d\n",i);
}


