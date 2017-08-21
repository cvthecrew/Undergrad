// Read in two numbers and add them. 

#include <stdio.h> 

int main() { 
	int n;
	int m;
	int sum;
	
	double pi = 3.14159;
	
		printf("Enter the first Integer\n");
		scanf("%d", &n); // %d = decimal integer ------ &n = address of n
		
		printf("Enter the Second Integer\n");
		scanf("%d", &m);
		
		sum = n + m;
		
		printf("The sum is: %d\n", sum); //we dont need the & because we are reading from the code not the user
		printf("%d", pi)
}

