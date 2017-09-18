//Alexander Cannell
//CSIS 3150
//1. Take one program from each of weeks 1 through 4 and mand.c  from week 5 and turn them into C++ programs that compile under g++.
//Part B.	Write a simple program that, given an integer n from the console, creates a pointer to n, then carefully explains (via printf statements) the difference between the pointer to n, the value of n, the & operator and the * operator.

#include <cstdio>

int main (){
	int i = 2052;
	int *ip = &n;
	
	printf("The value of i is %d\n", i);
	printf("The address of i is %p\n", ip);
	printf("what is in the cell pointed at by ip %d\n", *ip);
	printf("ip contains an address of %p\n", &ip);
	printf("what is in the cell pointed at by &ip %p\n", *(&ip));
	
}

