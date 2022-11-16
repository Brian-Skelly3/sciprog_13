#include <stdio.h>
#include <math.h>

int main(void){
  double  firstpart, secondpart, sum, estimate;
  int i, N;

  N = 12;
  firstarg  = (M_PI/3-0)/(2*N);      //(b-a)/2N
  secondarg = tan(0) + tan(M_PI/3);  //first and last argument
  

  //middle term of trapazoidal rule
  sum = 0.0;
  for (i=0; i<12; i++){
    sum += 2*(tan(i*M_PI/36));
  }

  //estimate of integral using trapazoidal rule
  estimate = firstarg*(secondarg + sum);

  printf("The esimate by Trapazoidal rule give %f \n", estimate);
  printf("The actual value is %f \n", log(2));

  return(0);

}
