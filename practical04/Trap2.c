#include <stdio.h>
#include <math.h>


float degtorad(float arg){
   return((M_PI*arg)/180.0);
}

float trap_rule(float a, float b, int N, float array[N+1]){
   float sum = array[0] + array[N];
   int i;
   for(i = 1; i<N; i++){
      sum += 2*array[i];
   }

   return (b-a)*(sum)/(2*N);

}


int main(void){
   int N, i;
   float start, end, step, tanarr[N+1], result;
   N = 17;
   start = 0.0;
   end = 60.0;
   step = (end-start)/N;
   
   for(i = 0; i<N+1; i++){
      tanarr[i] = tan(degtorad(step*i));
   }
   
   result = trap_rule(degtorad(start), degtorad(end), N, tanarr);
   printf("The answer is %f, start = %f, end =  %f, step = %f, N = %d, tanarr = %f\n", result, degtorad(start), degtorad(end), step,  N, tanarr);

return 0;

}


