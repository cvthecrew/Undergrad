// Node Class: Using pointers

#include <iostream>

using namespace std;

class Node{
	public:
		Node(int d, Node*q)
		int data;
		Node *next;
};

int main(){
	int n;
	Node *p;
	Node *q = 0;
	cout << "Enter Integers. CNTL-D to end" << endl;
	while(cin >> n){
		p = new Node(n,q);
		q = p;
	}
	for(; p;p = p->next){
		cout << p->data << "->";
		
	}
	cout << "*\n";
}

Node::Node(int d, Node *q){
	data = d;
	next = q;
	
}
