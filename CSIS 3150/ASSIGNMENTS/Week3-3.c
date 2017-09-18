//Alexander Cannell
//CSIS 3150 
//Week 3 Problem 3: Referring to the cplusplus documentation on the cmath library, test drive these functions: cos, exp, log, pow, sqrt, ceil, floor.

#include <stdio.h>
#include <math.h>

int main(){
	double x;
	double y;
	double z;
	x = 4.0;
	y = 5.6;
	
	//exp
	z = exp(x);
	printf("The exp is %f is %f.\n", x, z);
	
	//log
	z = log (x);
	printf("log(%f) = %f\n", x, z);
	
	//Pow
	printf("x ^ y = %f\n", pow (x, y));
	
	//sqrt
	z = sqrt (x);
	printf("sqrt(%f) = %f\n", z, x);
	
	//Ceil
	printf("ceil of x is %.1f\n", ceil(x));
	printf("ceil of y is %.1f\n", ceil(y));
	
	//Floor
	printf("floor of x is %.1lf\n", floor(x));
	printf("floor of y is %.1lf\n", floor(y));
	
	//cos
	z = cos(x * PI / 180.0);
	printf("The cosine of %f degrees is %f.\n", x, z)
}
