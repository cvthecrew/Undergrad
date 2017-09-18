//Alexander Cannell
//CSIS 3150
//7.	Write and test a function that computes n values of the sine function evenly spaced between 0 and 2Pi.

#include <stdio.h>
#include <math.h>

int main(){
	int x;
	double pie = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;
	double i;
	double sine;
	double tpie = 2*pie;
	
	printf("Please enter a number for SIN!");
	scanf("%d",&x);
	n = n++;
	
	for(i = 0; i<=(2*pie); i = i+2*pie/x){
		sine = sin(i);
		printf("sin(%f)=%f\n",i,sine);
	}
	
	printf("(2*pie = %f)", tpie);
	
}