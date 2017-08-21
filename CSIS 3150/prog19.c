// Call by reference versus call by value: use pointers if you need to change the actual data.
//

#include <stdio.h>
#define SIZE 11

void cubeByValue(int n);
void cubeByReference(int *iptr);

int main(){
	int n = 10;
	
	printf("The original value of n is %d \n", n);
	cubeByValue(n);
	printf("The value of n after call by value is %d \n", n);
	cubeByReference(&n);
	printf("The value of after call by reference n is %d \n", n);
	
}

void cubeByValue(int n){
	n=n*n*n;
	printf("Input cubed is %d \n", n);
	
}
void cubeByReference(int *iptr){
	*iptr = (*iptr) * (*iptr) * (*iptr);
	printf("input cubed is %d \n", (*iptr);
	
}