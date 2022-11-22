#include <stdio.h>
#include <math.h>

void Fib(int *a,int  *b);

int main(){
  
   int i, next, a, b, n;
   a = 0;   //a and b are the intial values for the fibonacci sequence
   b = 1;

   printf("Please give a number of iterations\n");
   scanf("%d", &n);
   
   if (n < 1){
      printf("Must be a nonnegative number.\n");   //Make sure we have  a positive number of iterations
      return 0;
   }

   printf("%d ", b);
   for (i=2; i<=n; i++){

      Fib(&a, &b);
      printf("%d ", b);

      if(i%10 == 0){   //A new line gets printed after every 10 iterations.
         printf("\n");
      }
   }

   printf("\n");

   return 0;
}



void Fib(int *a,int *b){
   int next;   //next is a temporary variable that stores a value and lets you easily change a amd bs values.
   next = *a + *b;
   *a = *b;
   *b = next;
}
