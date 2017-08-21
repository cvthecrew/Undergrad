//integer arrays

#include <stdio.h>
#define size 10

int main () {
	int n[size] = {10, 20, 30,40,50,60,70,80,90,100};
	int i;
	
	printf("%s%12s", "index", "value");
	
	for(i = 0; i< 10; i++){
		printf("%3d%13d\n", i, n[i]);
	}

}