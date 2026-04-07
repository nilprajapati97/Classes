#include<stdio.h>
main()
{
extern int i=10;
printf("In main i=%d\n",i);
}
int i;

void fun()
{
 printf("In fun i=%d\n",i);
}


