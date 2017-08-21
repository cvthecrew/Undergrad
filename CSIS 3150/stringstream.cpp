//string stream

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	ostringstream oss;
	int n = 100;
	
	oss << "as;lfkjas;fjklasdfkl;jasdfkljsdfkljasdfkl;asfjsdl;fkjasdfkljasdfkl;asjfsdkl;fjasdfkljasdf;kljasdfk;" << endl;
	oss << "For example: " << n << " " << n*n << endl;
	cout << oss.str() << endl;

}
