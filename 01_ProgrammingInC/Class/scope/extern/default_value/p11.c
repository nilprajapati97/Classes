#include<stdio.h>

void fun()
{
// extern int i;
 printf("In fun i=%d\n",i);
}

main()
{
extern int i;
printf("In main i=%d\n",i);
fun();
}
int i=10;


