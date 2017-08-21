// Two ways of copying strings
//

#include <stdio.h>

void copy1(char *s1, char *s2);
void copy2(char *s1, char *s2);

int main(){
	char s1[16];
	char *s2 = "now is the time";
	
	copy1(s1,s2);
	printf("s1 = %s \n", s1);
	
	copy2(s1,s2);
	printf("s1 = %s \n", s1);
}

void copy1(char *s1, char *s2) {
	int i;
	
	for(i = 0; (s1[i] = s2[i]) != '\0'; i++){
		;
	}
	
void copy2(char *s1, char *s2) {
	int i;
	
	for(;(*s1 = *s2) != '\0'; i++){
		;
	}
	
}