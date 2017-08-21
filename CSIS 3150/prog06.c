// 

#include <stdio.h>

int cube(int y); //function prototype

int main() {
	int i;
	
	for(i = 1; i<= 10; i++){
		printf("%d\n",  cube(i));
	}

	
}	

int cube(int m){
	return m*m*m;
}
