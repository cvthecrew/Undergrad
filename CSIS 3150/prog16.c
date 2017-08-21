//integer arrays security

#include <stdio.h>
#define size 10

int main () {
	int n = 10;
	int *ip = &n;
	
	printf("the value of n : %d\n", n);
	printf("the address of n: %p\n", ip);
	
	
	printf("what is the cell pointed to by ip? %d\n", *ip);
	printf("ip contains an address. what is ip's address? %p\n", &ip);
	printf("what in the cell pointed to by &ip? it better be the address of n; %p\n", *(ip));
	
}