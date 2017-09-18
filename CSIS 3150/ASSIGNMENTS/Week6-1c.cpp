//Alexander Cannell
//CSIS 3150
//1. Take one program from each of weeks 1 through 4 and mand.c  from week 5 and turn them into C++ programs that compile under g++.
//Part C. Counts the lines and words in a file.

#include <cstdio>
#define IN 1
#define OUT 0

int main () {
	int n;
	int lines = 0;
	int words = 0;
	int character = 0;
	int s;
	
	while ((c = getchar()) != EOF){
		++character;
		if (n == '\n'){
			++lines;
		}
		if (n == ' ' || c == '\n' || c == '\t'){
			s = OUT;
		}
		else{
			s = IN;
			++words;
		}
	}
	
	printf("%d %d %d \n" , lines, words, character);
}