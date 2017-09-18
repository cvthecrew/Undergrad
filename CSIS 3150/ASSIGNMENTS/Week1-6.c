//Alexander Cannell
//CSIS 3150
//6.	Write and test a function that computes the distance between two points.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double p;
	double q;
	double z;
	
	cout << "Enter the first number" << endl;
	cin >> p;
	
	cout << "Enter the second number" << endl;
	cin >> q;
	
	z = p.z - q.z;
	
	cout << "z = %f" << z << endl;
}
