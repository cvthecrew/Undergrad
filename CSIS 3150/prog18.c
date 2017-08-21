// Arrays

#include <stdio.h>
#define SIZE 11

void squareit(int n[], int size);

int main(){
	int	a[SIZE] = {0,2,4,6,8,10,12,14,16,18,20};
	int i;
	
	printf("The array values before passing the array \n");
	for (i = 0; i < SIZE; i++){
		Printf("%5d", d[i]);
	}
	
	squareit(a,SIZE);
	printf("The array values after passing the array \n");
	for (i = 0; i < SIZE; i++){
		Printf("%5d", d[i]);
	}
}

void squareit(int n[], int size);{
int j;
	
	for (j= 0; j < size; j++){
		n[j] = n[j]*n[j];
	}
}