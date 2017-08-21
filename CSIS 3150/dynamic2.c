// in c you are responsible for memory management

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strcopy(char *dp, char *sp){
	while (*sp != '\o') {//making sure its not at the end of the string
		*dp++ = *sp++;
		
	}
	*dp = '\o';
	return dp;
}

int main() {
	char *src = "Now is the time";
	char *dest;
	
	printf("source = %s \n", src);
	dest = (char *)malloc(sizeof(char) * (strlen(src)+1));
	strcopy(dest,src);
	printf("destination = %s\n",dest);
	free(dest);
	
	
}
	