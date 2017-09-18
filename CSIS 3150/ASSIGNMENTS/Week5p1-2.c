//Alexander Cannell
//CSIS 3150
//1. Add code to the Mandelbrot program that writes the data to a file with ppm extension.

int main(){
	FILE *pictureFile;
	pictureFile = fopen("mand.ppm");

	double crmin = -0.75;
	double crmax = -0.74;
	double cimin = -0.138;
	double cimax = -0.127;

	int nc = 400;
	int nr = 400;

	int Mand[nc][nr];
	int x,y;
	int color;
	double complex c;
	double complex image = 0.0+1.01;
	double dx = (crmax-crmin)/nc;
	double dy = (cimax-cimin)/nr;

	for(y=0; y<nr; y++){
		for(x=0; x<nc; x++){
			c=(crmin+x*dx) + (cimin + y*dy)*image;
			Mand[x][y] = iterate_pt(c) +65;
		}
	}
	fprintf(pictureFile, "P3\n");
	fprintf(pictureFile, "%d %d\n", nc, nr);
	fprintf(pictureFile, "255\n");

	for(y=0; y<nr; y++){
		for(x=0; x<nc; x++){
			color = Mand[x][y];
			fprintf(pictureFile, "%d\n",x);
			fprintf(pictureFile, "%d\n",y);
			fprintf(pictureFile, "%d\n", color);
		}
	}
	fclose(pictureFile);

	system("set PATH=.;%PATH%;"C:\Program Files\GIMP 2\bin\" && "start gimp-2.8.exe mand7.ppm"");
}
