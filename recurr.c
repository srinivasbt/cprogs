#include <stdio.h>

unsigned int factorial(unsigned int i) {
   if(i <= 1) {
      printf ("ret-1\n");
      return 1;
   }
   printf ("%d * %d\n", i, (i-1));
   return i * factorial(i - 1);
}

int  main() {
   int i = 4;
   printf("Factorial of %d is %d\n", i, factorial(i));
   return 0;
}
