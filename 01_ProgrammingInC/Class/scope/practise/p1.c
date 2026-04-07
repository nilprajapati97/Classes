#include<stdio.h>
void abc (void);
extern int i;
//extern int i;
main()
{
 extern int i; 
 printf("i in main()=%d\n",i);
 abc();

}

void abc(void)
{ 
 int i;
 printf("i in abc()=%d\n",i);
}
