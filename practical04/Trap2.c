#include <stdio.h>
#include <math.h>


float degtorad(float arg){   //Convert degrees to radians
   return((M_PI*arg)/180.0);
}

float trap_rule(int N, float array[N+1]){   //Finds area under curve using trapazoidal rule. y-coordinates are array

   float sum = array[0] + array[N];
   int i;
   for(i = 1; i<N; i++){
      sum += 2*array[i];
   }

   return degtorad((60.0-0.0))*(sum)/(2*N);

}


int main(void){
   int N=12, i=0;   //N is number of steps
   float start, end, tanarr[N+1], estimate;
   start = 0.0;
   end = 60.0;

   printf("Values are\n");

   for(i = 0; i<=N; i++){
      tanarr[i] = tan(degtorad(5.0*i));   //Stepsize is 5.0
      printf("tanarr[%d] =  %f\n", i, tanarr[i]);

   }

   estimate = trap_rule(N, tanarr);  //Estimate area under tan(x) using trapazoidal rule
   printf("The estimate is %f\n", estimate);

return 0;

}



