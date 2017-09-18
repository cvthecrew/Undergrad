// Basic Binary Tree Node

public class TreeNode {
	private int key;
	// private record myrecord; <- we have a key for the search
	private TreeNode left;
	private TreeNode right;
	
	public TreeNode (int n) {
		key = n;
		left = right = null;
	
	}
	public TreeNode (int n, TreeNode leftNode, TreeNode rightNode) {
		key = n;
		left = leftNode;
		right = rightNode;
	
	}
	
	public int getKey () {
		return key;
	}
	
	public TreeNode getLeft () {
		return left;
	}
	
	public TreeNode getRight () {
		return right;
	}
	
	public void setKey (int n) {
		key = n;
	}
	
	public void setLeft (TreeNode leftNode){
		left = leftNode;
	}
	
	public void setRight (TreeNode rightNode){
		right = rightNode;
	}
}