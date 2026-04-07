#include<stdio.h>
main()
{
 int i=10,j=20;
 abc(&i,&j);

}

void abc(int *m,int *n)
{
 printf("i=%d,j=%d \n",*m,*n);

}
