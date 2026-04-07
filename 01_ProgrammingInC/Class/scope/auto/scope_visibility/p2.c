#include<stdio.h>
main()
{
  int i=10;
  printf("In main i=%d\n",i);//10
  
  print();
  
  printf("In main i=%d\n",i);//10
 
}

void print()
{
  int i=20;
  printf("In print i=%d",i);//20
}
