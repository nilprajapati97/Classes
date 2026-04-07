#include<stdio.h>
main()
{
 int *p;
 p=abc();

}

int *abc()
{
  int i=10;
  return (&i);/* we not write this type because of this i is static varriable so scope is complited in this                
               function so return address give unexpected result */
}
