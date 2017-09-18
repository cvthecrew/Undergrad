// Adding multoplication and addition overloading.

#include <iostream>
#include <string>
using namespace std;

class Ratio {
	friend Ratio operator*(Ratio & x, Ratio & y);
	friend Ratio operator+(Ratio & x, Ratio & y);
	friend int operator<(Ratio & x, Ratio & y);
	friend int operator>(Ratio & x, Ratio & y);
	friend Ratio operator-(Ratio & x, Ratio & y);
	friend Ratio operator/(Ratio & x, Ratio & y);
	friend Ratio operator==(Ratio & x, Ratio & y);
	friend Ratio operator!=(Ratio & x, Ratio & y);
	
	public:
		Ratio(int n, int d);
		int getNum();
		int getDen();
		void setNum(int n);
		void setDen(int d);
		double convert();
		void invert();
		string print();
		int gcd(int m, int n);
		void reduce();
	private:
		int num;
		int den;
};

Ratio operator*(Ratio & x, Ratio & y){
	Ratio z(x.num*y.num, x.den*y.den);
	z.reduce();
	return z;
}

Ratio operator+(Ratio & x, Ratio & y){
	Ratio z(x.num*y.den+y.num*x.den, x.den*y.den);
	z.reduce();
	return z;
}

int operator<(Ratio & x, Ratio & y){
	int n1 = x.num*y.den;
	int n2 = y.num*x.den;
	
	if (n1 < n2){
		return 1;
	}
	else{
		return 0;
	}
}

int operator>(Ratio & x, Ratio & y){
	int n1 = x.num*y.den;
	int n2 = y.num*x.den;
	
	if (n1 > n2){
		return 1;
	}
	else{
		return 0;
	}
}


Ratio::Ratio(int n, int d){
	num = n;
	den = d;
}

int Ratio::getNum(){
	return num;
}

int Ratio::getDen(){
	return den;
}

void Ratio::setNum(int n){
	num = n;
}

void Ratio::setDen(int d){
	den = d;
}

double Ratio::convert(){
	return double(num)/den;
}

void Ratio::invert(){
	int temp = num;
	num = den;
	den = temp;
}

string Ratio::print(){
	string s = "";
	s += num + '/' + den;
	//cout << num << '/' << den;
	return s;
}

int Ratio::gcd(int m, int n){
	int r;
	if (m<n) {
		swap(m,n);
	}
	while (n > 0){
		r = m%n;
		m = n;
		n = r;
	}
	return m;
}

void Ratio::reduce(){
	if ((num==0) || (den ==0)){
		num = 0;
		den = 1;
		return;
	}
	if (den < 0){
		den = -1*den;
		num = -1*num;
	}
	if (den == 1){
		return;
	}
	
	int sgn = (num<0?-1:1);		//The only ternary operator.
	int g = gcd(sgn*num, den);
	num = num/g;
	den = den/g;
}