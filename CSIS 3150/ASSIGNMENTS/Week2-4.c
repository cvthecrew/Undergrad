//Alexander Cannell
//CSIS 3150
//4.	Illustrate call by reference versus call by value using a function other than the cube function shown in class.

#include <stdio.h>

void cubeByValue(int n);
void cubeByReference(int *iptr);
void squaredByValue(int n);
void squaredByReference(int *iptr);

int main () {
	int n = 10;

	printf("The original value of n is %d \n", n);
	cubeByValue(n);
	printf("The value of n after call by value is %d \n", n);
	cubeByReference(&n);
	printf("The value of n after call by reference is %d \n", n);

	printf("The original value of n is %d \n", n);
	squaredByValue(n);
	printf("The value of n after call by value is %d \n", n);
	squaredByReference(&n);
	printf("The value of n after call by reference is %d \n", n);
}

void cubeByValue(int n){
	n = n*n*n; // This is a local value.
	printf("Input cubed is %d \n", n);
}

	cubeByReference(int *iptr){
	*iptr = (*iptr)*(*iptr)*(*iptr); // This is not a local value.
	printf("Input cubed is %d \n", *iptr);
}

void squaredByValue(int n){
	n = n*n; // This is a local value.
	printf("Input squared is %d \n", n);
}

void  squaredByReference(int *iptr){
	*iptr = (*iptr)*(*iptr); // This is not a local value.
	printf("Input squared is %d \n", *iptr);
}