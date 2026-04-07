#include<stdio.h>
extern int i=10;
main()
{
  extern int i=20;
  printf("%d\n",i);

}


