#include<stdio.h>
void abc (void);
main()
{
  abc ();
  abc ();
}

void abc (void)
{
 static int i=10;
 printf("i=%d\n",i);
 i++;
}
 
