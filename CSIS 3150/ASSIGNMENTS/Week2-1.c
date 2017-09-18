//Alexander Cannell
//CSIS 3150
//1.	Write a program that, given positive integer n from the console, computes the first n fibonacci numbers.

#include <stdio.h>

int fibonacci(int n);

int main{
	int i;
	int n;
	printf("input a value\n");
	scanf("%d", &n);
	for (i = 0; i<=n; i++){
		printf("%2d = %1d", i, fibonacci(i));
	}
}
int fibonacci(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(n>=2){
		return(fibonacci(n-1) + fibonacci(n-2)); 
	}
}
