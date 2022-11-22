#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int source, int destination, int inter);

int main(void){
   
   int h;
   printf("Please pick a number of discs\n");
   scanf("%d", &h);
   if (h<1){
      printf("h must be  apositive integer\n");
      return 1;
   }

   printf("Solution for %d discs is\n", h);
   hanoi(h, 1, 3, 2);   //Start on the first line, and end on the last line, and the other value is the middle rod.
      
   return 0;
}


void hanoi(int n, int source, int destination, int inter){
   if (n ==1){
      printf("Move the disc from %d to %d\n", source, destination);
   }
   else{
      hanoi(n-1, source, inter, destination);
      printf("Move the disc from %d to %d\n", source, destination);
      hanoi(n-1, inter, destination, source);    //Using recursion to cahnge where the start and end points are
   }
}
