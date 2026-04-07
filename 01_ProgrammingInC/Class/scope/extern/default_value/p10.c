#include<stdio.h>
main()
{
extern int i;
printf("In main i=%d\n",i);
fun();
}
int i=10;

void fun()
{
 extern int i;
 printf("In fun i=%d\n",i);
}


