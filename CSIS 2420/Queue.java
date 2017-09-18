// Implementing a queue using inheritance

public class Queue extends List {
	public Queue () {
		super("my queue");
	}
	
	public void enqueue (Object obj) {
		super.insertAtFront(obj);
	}
	public void dequeue () {
		if (isEmpty()){
			return null;
		}
		super.removeFromFront();
	}
	public boolean isEmpty() {
		return super.isEmpty();
	}
	// the following exceeds the ADT of a queue
	public String print () {
		return super.print();
	}
}