//Alexander Cannell
//CSIS 3150
//Week 6
//1.	Write a program called “sum” that, when run from the command line sums all the numbers listed, ex., sum 1 2 3 4 would give 10.  (Hint: use the command atoi.)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>


int main(int argc, char *argv[]){
	int i;
	int value = 0;
	int sum = 0;
	
	for(i = 1; i < argc; i++){
		value = atoi(*(argv+1));
		cout << "%d +" << sum << "%d\n" << value << endl;
		sum += value;
		cout <<"%d\n", sum << endl;
	}
}