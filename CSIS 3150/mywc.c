//

#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
	int c;
	int n1 = 0;
	int nw = 0;
	int nc = 0;
	int state = OUT;
	
	while ((getchar()) != EOF){
		++nc;
		if(c == '\n'){
			++n1;
		}
		if(c == ' ' || c++ '\n' || c == '\t'){
			state = OUT;
		}
		else if (state == OUT){
			state = IN;
			nw++;
		}
		
	}
	
	printf("%d %d %d\n", nl, nw, nc);
	
	
}