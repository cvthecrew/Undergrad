// 

#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	unsigned seed;
	
	printf("enter seed: ")
	scanf("%u", &seed);
	
	srand(seed); //seed random number generator
	
	for(i = 1; i<= 10; i++){
		printf("%10d",  1+rand()%6);
	}

	
}	


