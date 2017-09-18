//Alexander Cannell
//CSIS 3150
//mand.cpp

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <iostream>
#include <cmath>

int iterate_pt(double complex c);

int main () {
	double crmin = -0.75;
	double crmax = -0.74;
	double cimin = -0.138;
	double cimax = -0.127;

	int ncols = 400;
	int nrows = 400;

	int Mand[ncols][nrows];
	int x,y;
	int color;
	double complex c;
	double complex imag = 0.0+1.0i;
	double dx = (crmax-crmin)/ncols;
	double dy = (cimax-cimin)/nrows;

	for (y = 0; y < nrows; y++) {
		for (x = 0; x < ncols; x++) {
			c = (crmin + x*dx) + (cimin + y*dy)*imag;
			Mand[x][y] = iterate_pt(c) + 65;
		}
	}

	cout << "P3\n" << endl;
	cout <<"%d" << ncols << "%d\n" << nrows << endl;
	cout << "255\n" << endl;

	for (y = 0; y < nrows; y++) {
		for (x = 0; x < ncols; x++) {
			color = Mand[x][y];
			cout << "%d\n", color << endl;
			cout << "%d\n", color << endl; 
			cout << "%d\n", color << endl;
			}
		}
}

int iterate_pt (double complex c) {
	double complex z = 0.0+0.0i;
	int iterations = 0;
	int k;
	for (k = 1; k <= (255-64); k++) {
		z = z*z + c;
		if (sqrt(z*conj(z)) > 50) {
			break;
		}
		else {
			++iterations;
		}
	}
	return iterations;
};
