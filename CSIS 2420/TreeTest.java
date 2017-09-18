// Test driver for the Tree class

public class TreeTest {
	public static void main (String[] args) {
		Tree myTree = new Tree(50);
		int n;
		
		for (int i = 1; i<+ 10; i++) {
			n = (int) (Math.random()*100)
			myTree.insertNode(myTree.root, n);
			System.out.println(n + " ");
		}
		System.out.println();
		System.out.println("After inOrderTraveral");
		myTree.inOrderTraversal(myTree.root);
		
	}
} 