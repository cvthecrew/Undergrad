//Alexander Cannell
//CSIS 3150
//2.	Write a simple program that, given an integer n from the console, creates a pointer to n, then carefully explains (via printf statements) the difference between the pointer to n, the value of n, the & operator and the * operator.


#include <stdio.h>

int main () {
	int n = 10;
	int *ip = &n;
	char c = '$';
	char *cptr = &c;

	printf("The value of n: %d\n", n);
	printf("The address of n: %p \n", ip);


	printf("What's in the cell pointed to by ip? %d \n", *ip);
	printf("ip contains an address. What's ip's address? %p\n", &ip);
	printf("What's in the cell pointed to by &ip? It better be the address of n: %p \n", *(&ip));

	printf("Pointer Arithmetic\n");

	printf("The value of ip is: %p \n", ip);
	printf("The value of ip is: %p \n", ++ip);

	printf("The value of cptr is: %p \n", cptr);
	printf("The value of cptr is: %p \n", ++cptr);

}