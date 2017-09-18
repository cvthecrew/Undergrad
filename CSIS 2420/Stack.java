// A Stack is a last in first out data structure
// Applications: 
// Program Control stack: compilers:
// Compilers : parsing arithmetic expressions
// Building other data structures, in algorithms like depth first search
// Software Engineering methodologies: 
// Inheritance method
// Composition method
// The Code below uses inheritance 
// A Stack by definition has push and pop methods and a way of inspecting the top element
//
public class Stack extends List {
	public Stack()
		super("My Stack");
	}
	
	public void push (object obj) {
		super.insertAtFront(obj);
	}
	
	public Object pop () {
		if (isEmpty()) {
			return null;
		}
		else {
			return super.removeFromFront();
		}
		
	}
	
	public boolean isEmpty(){
		return super.isEmpty();
		
	}
	// This is strictly going beyond the definition of a Stack.
	public String print() {
		return super.print();
	}
}
