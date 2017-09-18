//Alexander Cannell
//CSIS 3150
//1.Test drive the following algorithms in the <algorithm> library: find, fill, reverse, set_intersection, set_union (hint: consult cplusplus).

#include <iostream>
#include <algorithm> //Algorithm library
#include <vector>
using namespace std;

int main{
	vector <int> x;
	vector <int> y;
	vector <int> z(20);
	vector <int>::iterator it;
	vector <int>::iterator Result;
	vector <int>::iterator Result1;
	
	int i;
	for ( i = 0 ; i <= 9 ; i++ )
	{
      x.push_back( 5 * i );
	}
	
	int j;
	for ( j = 0 ; j <= 9 ; j++ ){
      y.push_back(j);
	}
   
	//Fill
	//This is the pad function
	cout << "Fill example" << endl;
		
	fill( x.begin( ) + 5, x.end( ), 2 );
	cout << "Modified x = ( " ;
	for ( it = x.begin( ) ; it != x.end( ) ; it++ )
		cout << *it << " ";
	cout << ")" << endl;
	
	//Reverse
	//switches values around
	cout << "Reverse Example" << endl;
	reverse (x.begin( ), x.end( ) );
	cout << "The modified vector x with values reversed is:\n ( " ;
	for ( it = x.begin( ) ; it != x.end( ) ; it++ )
		cout << *it << " ";
	cout << ")" << endl;
	
	//set intersection
	cout << "set intersection example" << endl;
	Result = set_intersection ( x.begin ( ) , x.end ( ) ,y.begin ( ) , y.end ( ) , z.begin ( ) );
	cout << "Union of source ranges with default order," << "\n vector xmod =  ( " ;
	for ( it = x.begin( ) ; it != Result ; it++ ){
      cout << *it << " ";
	}
	cout << ")" << endl;
	
	//set union
	cout << "set union example" << endl;
	Result1 = set_union ( x.begin ( ) , x.end ( ) , y.begin ( ) , y.end ( ) , z.begin ( ) );
	cout << "Union of source ranges with default order," << "\n vector xmod =  ( " ;
	for ( it = x.begin( ) ; it != Result1 ; it++ ){
      cout << *it << " ";
	}
	cout << ")" << endl;
   
}

