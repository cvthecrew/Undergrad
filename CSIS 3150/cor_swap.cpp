// 

#include <iostream>
using namespace std;
void swapcor(int &a, int &b){
	int tmp =a;
	a = b;
	b = tmp;
}

int main(){
	int x = 37;
	int y =52;
	
	cout << c << " " << y << endl;
	swapcor(x,y);
	cout << c << " " << y << endl;
}