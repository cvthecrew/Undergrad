//Alexander Cannell
//CSIS 3150
//4.	Add these methods to the Complex structure: add, mult. Creating a complex structure type

#include <stdio.h>
#include <math.h>

typedef struct {
	double re;
	double im;
}Complex;

double modulus (Complex c);
double add (Complex c);
double multi (Complex c);

int main(){
	Complex z1;
	Complex z2;
	Complex *zptr;

	z1.re = 1.0;
	z1.im = 1.0;
	printf("The modulus of z1 is %f\n", modulus(z1));

	zptr = &z2;
	zptr->re = 3.0;
	zptr->im = 4.0;
	printf("The modulus of z2 is %f\n", modulus(z2));
	
	z1.re = 1.0;
	z1.im = 1.0;
	printf("The add of z1 is %f\n", add(z1));

	zptr = &z2;
	zptr->re = 3.0;
	zptr->im = 4.0;
	printf("The add of z2 is %f\n", add(z2));
	
	z1.re = 1.0;
	z1.im = 1.0;
	printf("The multiply of z1 is %f\n", multi(z1));

	zptr = &z2;
	zptr->re = 3.0;
	zptr->im = 4.0;
	printf("The multiply of z2 is %f\n", multi(z2));
}

double modulus (Complex c){
	double x = c.re;
	double y = c.im;

	return sqrt(x*x+y*y);
}

double add (Complex c){
	double x = c.re;
	double y = c.im;
	
	return x+y;
}

double multi (Complex c){
	double x = c.re;
	double y = c.im;
	
	return x*y;
}
