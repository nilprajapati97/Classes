#include<stdio.h>
main()
{
  int i=10;
  printf("1> i=%d\n",i);//10

 {  
  int i=20;
  printf("2> i=%d\n",i);//20
 } 
  printf("3> i=%d\n",i);//10
}

