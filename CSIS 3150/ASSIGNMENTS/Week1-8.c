//Alexander Cannell
//CSIS 3150
//8.	Write and test a function that simulates the rolling of two dice.  It should take an integer n that determines how many times the dice are rolled then print a list showing the number of each possible outcome.

#include <stdio.h>
#include <math.h>
#include <time.h>

public int diceRoll(int n);

int main{
	printf("How many times?");
	scanf("%d", &n);

	printf("How many times?");
	scanf("%d", &n);

	diceRoll(n);
}
int diceRoll(int n){
	int totals[11]={0,0,0,0,0,0,0,0,0,0,0};
	int sum;
	int i;
	int j;

	srand(time(NULL));

	for(i = 1; i <= n, i++){
		sum = ((rand()%6 + 1) + (rand()%6 + 1));
		totals[(sum-2)]++;
	}
		printf("# of sum %d = %d\n", j+2, totals[j]);
}
