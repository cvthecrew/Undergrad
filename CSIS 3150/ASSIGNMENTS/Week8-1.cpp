//Alexander Cannell
//CSIS 3150
//1. Complete and test the geometry class hierarchy started in class.

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415926535;

class Shape {	//Abstract Class.
	public:
		virtual void print() = 0;	// Syntax for a "pure virtual function.";
		virtual float area() = 0;	// These are not implemented in the base class.	
};

class TwoDimensional : public Shape {
	public:
		virtual float perimeter() = 0;
};

class ThreeDimensional : public Shape {
	public:
		virtual float volume() = 0;
};

class Circle : public TwoDimensional { // Concrete Class.
	public:
		Circle(float r);
		void print();
		float perimeter();
		float area();
	private:
		float radius;
};

Circle::Circle(float r){
	radius = r;
}

void Circle::print(){
	cout << "This shape is a circle." << endl;
}

float Circle::perimeter(){
	return 2*PI*radius;
}

float Circle::area(){
	return PI*radius*radius;
}

class Cone : public ThreeDimensional {
	public:
		Cone(float r, float h);
		void print();
		float area();
		float volume();
	private:
		float radius;
		float height;
};

Cone::Cone(float r, float h){
	radius = r;
	height = h;
}

void Cone::print(){
	cout << "Cone radius = " << radius << ", height = " << height << ".\n";
}

float Cone::area(){
	float s = sqrt(radius*radius + height*height);
	return (PI*radius)*(radius + s);
}

float Cone::volume(){
	return (PI*radius*radius*height)/(3.0);
}

int main(){
	Circle *p;
	Circle c(3.0);
	p = &c;
	p->print();
	cout << "The perimeter of the circle is: " << c.perimeter() << endl;
	cout << "It's area is: " << c.area() << endl;
}