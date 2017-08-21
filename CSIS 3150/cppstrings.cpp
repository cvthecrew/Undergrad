
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string scopy;
	
	cout << "Enter a String: " << endl;
	//cin >> s;
	//cout << s << endl;
	getline(cin,s);
	cout << s << endl;
	cout << s.length() << endl;
	
	string::interator iter;
	for(iter = s.begin(); iter != s.end(); iter++){
		cout << *iter << endl;
	}
	cout << s.find("the",0) << endl;
	cout << s.substr(3,10) << endl;
	cout << s.erase(3,16) << endl;
	cout << s.insert(3,"is the time") << endl;
}
