// Arrays

#include <stdio.h>

int main(){
	char c[10000]="now";
	
	printf("%p \n", &c);
	printf("%p \n", c);
	printf("%p \n", &c[0]);
	
	printf("%c \n", c[0]);
	c[2] = 'a';
	printf("%c \n", c[2]);
	printf("%s \n", c);
	c[3] = 'a';
	printf("%s \n", c[2]);
}