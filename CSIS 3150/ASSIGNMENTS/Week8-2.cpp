//Alexander Cannell
//CSIS 3150
//2. Rewrite and test the print method of the ratio class so it returns a string.

#include <iostream>
#include "ratio.h"
#include <string>
using namespace std;

int main(){
	Ratio x(22,7);
	cout << "x = " << x.print() << endl;
	//x.print();
	cout << " = " << x.convert() << endl;
	x.invert();
	cout << "1/x = ";
	x.print();
	cout << endl;
	x.setNum(1111);
	x.setDen(2222);
	cout << x.getNum() << endl;
	cout << x.getDen() << endl;
	x.print();
	cout << endl;
	//cout << x.gcd(1111, 2222);
	x.reduce();
	x.print();
	Ratio y(x);
	cout << "\nAfter using the copy contsructor: " << endl;
	y.print();
}