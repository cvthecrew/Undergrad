//Alexander Cannell
//CSIS 3600

#include <iostream>
#include <cmath>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

int main(){

	int x[2];
	a[25] = “\n”;
	char b[100];

	x[0] = open(“myfile”,O_RDWR);
	x[1] = open(“myfile”,O_RDWR);

	write(x[0],a,strlen(a));

	printf(“\nEnter your text now…”);
	gets(a);

	write(x[0],a,strlen(a));
	write(1, b, read(x[1],b,sizeof(b)));

	close(x[0]);
	close(x[1]);

	printf(“\n”);
	return 0;
}