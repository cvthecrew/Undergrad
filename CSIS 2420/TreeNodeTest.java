// test driver for TreeNode

import java.math.*;

public class TreeNodeTest {
	public static void main (String[] args) {
	int num1 = 1000;
	int num1 = 2000;
	int num3 = 3000;
	
	TreeNode childNode1 = new TreeNode(num1);
	TreeNode childNode1 = new TreeNode(num1);
	TreeNode root = new TreeNode(num3, childNode1, childNode2);
	
	System.out.println(root.getKey());
	System.out.println(root.getLeft().getKey());
	System.out.println(root.getRight().getKey());
	
	}
}