//Alexander Cannell
//CSIS 3150
//5.	Add code that automatically saves the image data to a file with a ppm extension.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	FILE *fout;
	int h = 200;
	int w = 200;
	int c = 100;
	int i, j;
	
	fout = fopen("TEST.ppm","W");
	fprintf(fout, "P3\n%d %d\n255", h, w);
	
	for(i = 1; i<= w; i++){
		for(j = 1; j<=h; j++){
			c = (int)fabs(255*sinh(i/50)*cos(j/10));
			fprinf(fout, "%d\n%d\n%d\n", c, c, c);
		}
	}
	fclose(fout);
}