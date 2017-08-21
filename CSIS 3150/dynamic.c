//

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int i;
	int *a;
	char *cptr;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	a = (int *) malloc(n * sizeof(int));  //malloc = set asside exactly how many bytes we would like
	printf("Enter %d numbers: \n: ", n);
	cptr = (char *) a;
	for (i = 0; i < n; i++){
		scanf("%d", a+i); //pointer arithmetic
	
	}
	printf("Here are the same numbers in revers order: \n");
	for (i = n-1; i>= 0; i--){
		printf("d \n, a[i]);
	}
}
	