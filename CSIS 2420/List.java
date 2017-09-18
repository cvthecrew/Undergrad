//list Class

public class list {
	private Node firstNode;
	private Node lastNode;
	private String name;
	
	public list () {
		name = "Default List";
		firstNode = lastNode = null;
	}
	
	public list (String s) {
		name = s;
		firstNode = lastNode = null;
	}
	
	public void insertAtFront (object insertItem){
		//if our list is empty create a new node and place insertItem
		//then make sure firstNode and lastNode are pointing to it. 
		
		if( isEmpty()) {
			firstNode = lastNode = new Node(insertItem);
		}
		//if the node is not empty, we first create a new node and place 
		//insertItem in it. Second it must point to the right place. Third
		//we need to make sure the firstnode and lastnode have the right
		else {
			firstNode = new Node (insertItem,firstNode);
		}
	}
			
	public boolean isEmpty (){
		return (firstNode == null);
		
	}
	
	public Object removeFromFront () {
		Object removeItem = null;
		if (isEmpty()){
			removeItem = "This List is Empty!!";
		return removeItem;
		}
		removeItem = firstNode.getObject();
		if (firstNode.equals(lastNode)){
			firstNode = lastNode = null;
		}
		else{
			firstNode = firstNode.getNext();
		}
		return removeItem;
	}
	
	public String print() {
		String result = "";
		String newLine = "\n";
		if( isEmpty()) {
			result += "Empty" + name + newline;
			return result;
		}
		result += name + "Contains: " + newline;
		Node current = firstNode;
		while ( current != null ) {
			result += current.getObject() + newline;
			current = current.getObject();
		}
		return result;
	}
}