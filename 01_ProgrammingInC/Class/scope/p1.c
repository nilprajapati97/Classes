#include<stdio.h>
extern void print(char *);
char *str();
main()
{
char *p;
char s[]="Hello";
//int i;
 
print(s);

p=str();

printf("Return string=%s\n",p); 
//for(i=0;d[i];i++)
//   printf("%c",d[i]);
}

