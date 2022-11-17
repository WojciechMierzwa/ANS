
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
   int i, n=100;
   time_t t;

   srand((unsigned) time(&t));
   printf("SRAND bez ogarniczen:\n");
   for( i = 0 ; i < 6 ; i++ ) {
      printf("%d\n", rand() );
   }
   printf("SRAND w zakresie [1-49]:\n");
   for( i = 0 ; i < 10 ; i++ ) {
      printf("%d\n", rand() % 48+1);
   }
   
   return(0);
}
