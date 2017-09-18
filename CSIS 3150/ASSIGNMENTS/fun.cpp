
#include <iostream>

int Fun (int n){
    if(n==4){
        return 2;
    }
    else {
        return 2 * Fun(n+1);
    }
}
int main(){
    cout << "N's value" << endl;
    Fun(n);
}
