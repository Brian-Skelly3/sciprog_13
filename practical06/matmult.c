#include <stdio.h>

double matmult(double A[5][3], double B[3][4]);

int main(void){

   int i, j;
   int n=5, p=3, q=4;
   double A[n][p], B[p][q], C[n][q];

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
   matmult(A, B);


   return 0;
}




double matmult(double A[5][3], double B[3][4]){

   int h, i, j;
   int n=5, p=3, q=4;
   double C[n][q];

   for (i=0; i<n; i++){
      for (j=0; j<q; j++){
         C[i][j] = 0.0;
      }
   }

   for (h=0; h<n; h++){
      for (j=0; j<q; j++){
         for (i=0; i<p; i++){

            C[h][j] += A[h][i] * B[i][j];    
         }
      
         printf("%3.0lf", C[h][j]);

      }
      printf("\n");
    }

}






