//Alexander Cannell
//CSIS 3150
//3.	Write a program that, given positive integer n from the console, passes the array [1,...,n] to a function which computes the square of each element and returns the result to the caller.

#include <stdio.h>
#include <math.h>


int main () {
    int n[ 10 ];
    int i;
    int j;

     for ( i = 0; i < 10; i++ ){
      n[ i ] = i * i;
   }
    for (j = 0; j < 10; j++ ){
      printf("Element[%d] = %d\n", j, n[j] );
   }

}
