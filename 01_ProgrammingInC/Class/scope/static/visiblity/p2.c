#include<stdio.h>
void abc (void);
static int i=10;
main()
{
 abc();
 abc();
}
void abc (void)
{
 static int i;
// i=10;

 printf("i=%d\n",i);
 i++;

}
