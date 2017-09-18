//Alexander Cannell
//CSIS 3150
//1. Using operator overloading, define and test the '-' and '/' operators to the ratio class.
//2. Define and test the '<' and '>' operators to the ratio class.
//3. Define and test the '==' operator to the ratio class.
//4. Define and test the '!=' operator to the ratio class.

#include <iostream>
#include "ratio.h"
using namespace std;

int main(){
	Ratio x(1,2);
	Ratio y(1,3);
	Ratio z(1,1);
	
	cout << endl << "x = "; 
	x.print();
	cout << endl;
	cout << "y = ";
	y.print();
	cout << endl;
	
	//Multi
	z=x*y;
	cout << "x*y = ";
	z.print();
	cout << endl;
	
	//Add
	z=x+y;
	cout << "x+y = ";
	z.print();
	cout << endl;
	
	//Subtract
	z=x-y;
	cout << "x*y = ";
	z.print();
	cout << endl;
	
	//Division
	z=x/y;
	cout << "x/y = ";
	z.print();
	cout << endl;
	
	//Greater Than
	if(x>y){
		cout << "Greater Than is true" << endl;
	}
	
	//Less Than
	if(x<y){
		cout << "Less Than is true" << endl;
	}
	
	//Equal Than
	if(x == y){
		cout << "Equal to is true" << endl;
	}
	
	//Not Equal Than
	if(x != y){
		cout << "Not Equal to is true" << endl;
	}
}

