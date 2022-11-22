#include <stdio.h>

int itergcd(int a, int b);
int recurgcd(int a, int b);

int main(void){

   int a, b, ierror;

   printf("Please input two positive integers:\n");
   ierror = scanf("%d %d", &a, &b);
   if(ierror !=2){
      printf("Please enter two positive integers\n");
      return 1;
   }

   if (a<=0 || b<=0){
      printf("These numbers are not positive\n");
      return 1;
}

   //Call and use the functions created
   printf("Iterative gcd(%d, %d = %d)\n", a, b, itergcd(a, b));
   printf("Recursive gcd(%d, %d = %d)\n", a, b, recurgcd(a, b));

   return 0;
}


int itergcd(int a, int b){
   int temp;
   while(b != 0){
      temp = b;    //Using a temporary variable to give new values to a and b
      b = a%b;
      a = temp;
   }
   return a;
}


int recurgcd(int a, int b){
   if (b == 0){
      return a;
   }
   else{
      return (recurgcd(b, a%b));
   }
}

