// test node

import java.math.*;

public class NodeTest{
	public static voic main (String[] args) {
		Character ch = new Character('$');
		BigInteger bi = new BigInteger("1234567890987654321");
		
		Node n1 = new Node(bi);
		node n2 = new Node(ch,n1);
		
		System.out.println(n2.getObject());
		System.out.println(n1.getObject());
		System.out.println(n2.getNext().getObject());
		
		n1.setObject(ch);
		System.out.println(n1.getObject());
	}
}