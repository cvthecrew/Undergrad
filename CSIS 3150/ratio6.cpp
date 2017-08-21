// Adding Multiplication and addition overloading

#include <iostream>
using namespace std;

class Ratio {
	friend Ratio operator*(Ratio &x, Ratio &y);
	public:
		Ratio(int n, int d);
		int getNum();
		int getDen();
		void setNum(int n);
		void setDen(int d);
		double convert();
		void invert();
		void print();
		int gcd(int m, int n);
		void reduce();
	private:
		int num;
		int den;
		
};
Ratio operator*(Ratio &x, Ratio &y){
	Ratio z(x.num*y.num, x.den*y.den);
	z.reduce();
	return z;

}

Ratio::Ratio(int n, int d){
	num =n;
	den = d;
}

int Ratio::getNum(){
	return num;
}
