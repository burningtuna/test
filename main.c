#include <stdio.h>
#include <stdlib.h>

int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n;
   int sum;

   sum = 0;
   
   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
//      printf("%d ", values[n]);
	  sum = sum + values[n];
   }

   qsort(values, 5, sizeof(int), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", values[n]);
   }
  printf("This is end of program\n"); 
  printf("I need print more status \n", sum); 
  // remove syntax error;
  return(0);
}
