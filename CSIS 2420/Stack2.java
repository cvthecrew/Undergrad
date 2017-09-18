// Abstract data type: ADT: the definition of the functionality of the type. 
// For a given definition we have many ways to implement it.
// our implementation by inheritance does too much. 
// It lets the user do anything you can do in the super class. (security issue) 
// instead of inheritance, in this application, we should use "Composition".
// We Declare a private list an put in  only those methods we want. 
// 
public class Stack2 {
	private List s;
	


	public Stack()
		s = new list("the stack");
		
	}
	public void push (object obj) {
		s.insertAtFront(obj);
	}
	public Object pop () {
		if (isEmpty()) {
			return null;
		}
		else {
			return s.removeFromFront();
		}
		
	}
	public boolean isEmpty(){
		return s.isEmpty();
		
	}
	// This is strictly going beyond the definition of a Stack.
	public String print() {
		return s.print();
	}
}