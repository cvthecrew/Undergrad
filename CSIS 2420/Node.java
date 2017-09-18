//Basic Node Class

public class Node {
	private Object data;
	private Node next;
	
	public Node (Object Obj, Node nextNode) {
	data = obj;
	next = nextNode;
	}
	
	public Node (Object obj) {
		data = obj;
		next = null;
		}
	
	public void setObject (Object obj) {
		data = obj;
		}
		
	public void setNext (Node nextNode) {
		next = nextNode;
	}
	
	public object getObject() {
		return data;
		}
	
	public Node getNext() {
		return nextNode;
		}
		
}