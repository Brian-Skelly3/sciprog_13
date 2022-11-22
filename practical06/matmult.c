#include <stdio.h>

double matmult(double A[5][3], double B[3][4]);

int main(void){

   int i, j;
   int n=5, p=3, q=4;
   double A[n][p], B[p][q], C[n][q];

   //Creating the matrix A. This method will be repeated for matrix B.
   printf("This is the matrix A\n");
   for (i=0; i<n; i++){
      for (j=0; j<p; j++){
         A[i][j] = i+j;
         printf("%3.0lf", A[i][j]);
      }
      printf("\n");
   }

   printf("This is matrix B\n");
   for (i=0; i<p; i++){
      for (j=0; j<q; j++){
         B[i][j] = i-j;
         printf("%3.0lf", B[i][j]);
      }
      printf("\n");
   }

   //print out the matrices
   
   printf("This is the matrix C\n");
   matmult(A, B);   //Create matrix C using the subroutine.

   return 0;
}


double matmult(double A[5][3], double B[3][4]){

   int h, i, j;
   int n=5, p=3, q=4;
   double C[n][q];

   //Make C the right size and ititialise every value as 0
   for (i=0; i<n; i++){
      for (j=0; j<q; j++){
         C[i][j] = 0.0;
      }
   }

   for (h=0; h<n; h++){
      for (j=0; j<q; j++){
         for (i=0; i<p; i++){
            C[h][j] += A[h][i] * B[i][j];    //Multiplied the right sections of A and B to create C
         }
         printf("%3.0lf", C[h][j]);   //Print C here rather than in main as the for loops are already here.
      }
      printf("\n");
   }
}
