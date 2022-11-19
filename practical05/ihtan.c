#include <stdio.h>
#include <math.h>


double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(void){

   double delta, x;

   printf("Enter the precision for Maclaurin series\n");
   scanf("%lf", &delta);

   int length = 1000;
   double tan1[length];  //Store the results of arctanh1 for each x
   double tan2[length];  //Store the results of arctanh2 for each x

   int j=0;  //array index
   x = -0.9;
   while(x<=0.9 && j<length){   //Both conditions must be met
     tan1[j] = arctanh1(x, delta);
     tan2[j] = arctanh2(x);
      printf("The difference at x = %lf between both methods is %.10lf\n", x, fabs(tan1[j] - tan2[j]));
      j++;
      x += 0.1;
   }


return 0;

}


double arctanh1(const double x, const double delta){   //Estimate using MacLaurin series
   double arcTan = 0;  //Approx. result
   double elem, val;
   int n=0;  //sum parameter
   elem = delta + 2;   //Make elem larger than delta so that the while loop can start. It's gets  anew value inside anyway

   while (fabs(elem) >= delta){
      val = 2*n+1;
      elem = pow(x, val)/val;
      arcTan += elem;
      n++;
   }
   return arcTan;

}


double arctanh2(const double x){   //Exact value using logarithms
   return((log(1+x)-log(1-x))/2);
}







