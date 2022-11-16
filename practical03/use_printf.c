#include <stdio.h>
#include <math.h>

int main(void){
  int int1, int2;
  double float1, float2;
  int1 = 17;
  int2 = int1*3;
  float1 = pow(2.0,(3.0/3.0));
  float2 = pow(float1,(3.0/3.2));
  printf("two ints %d %d  and two floats %f %f", int1, int2, float1, float2);

  return(0);
}
