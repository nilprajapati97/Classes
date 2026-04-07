#include<stdio.h>
int find1s(int num)
{
   int count =0 , i=0 , iteration=0;
   for(i=31 ;i>=0 ;i--)
      {
        iteration++;
	     if( (num >> i) &1)
		    count++;
	  }
	  printf("Iterations: %d\n", iteration);
	  return count;
}
int countOnes(unsigned int n) {
    int count = 0 , iteration1 = 0;
    while (n) {
        n &= (n - 1); // clears the lowest set bit
        count++;
        iteration1++;
    }
    printf("Iterations: %d\n", iteration1);
    return count;
}
int main()
{
   unsigned int num = 29; // Example number
   printf("Number of 1s in %d: %d\n", num, countOnes(num));

   //int num = 29; // Example number
   printf("Number of 1s in %d: %d\n", num, find1s(num));
   return 0;
}


