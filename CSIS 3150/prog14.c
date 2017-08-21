//integer arrays security

#include <stdio.h>
#define size 10

int main () {
	char s1[20];
	char s2[] = "now is the time";
	int i;
	
	printf("enter a string: ")
	scanf("%s", s1);
	
	printf("s1 is %s\ns2 is %s", s1,s2);
	
	printf("Printing s1 one character at a time: ");
	for (i = 0; s1[i]!= '\0'; i++){
		printf("%c", s1[i]);
	}
	
	printf("\n");
	
	printf("Printing s1 one character at a time, but not looking out for the null charactors: ");
	for  (i=0; i<10000; i++){
	printf("%c ",s1[i]);
	}
	
}