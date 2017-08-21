// 

#include <iostream>
using namespace std;

typedef unsigned long long ULL;

ULL factorial (ULL n){
	if(n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}

}

int main(){

	ULL Max = 20;
	
	for(int i = 1; i <= man; i++){
		cout << i << "\t" << factorial(i) << end1;
	}
	
}
