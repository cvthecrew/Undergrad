// list test
import java.math.*;


public class ListTest {
	public static void main (String[] args) {
		Character ch new Character('$');
		BigIneger bi1 = new BigInteger('111111111111111111111');
		BigIneger bi1 = new BigInteger('222222222222222222222');
		BigIneger bi1 = new BigInteger('333333333333333333333');
	
		List lst = new List();
	
		lst.insertAtFront(ch);
		lst.insertAtFront(bi1);
		lst.insertAtFront(bi2);
		lst.insertAtFront(bi3);
		
		System.out.println(lst.print());
		
		lst.removeFromFront();
		System.out.println(lst.print());
		lst.removeFromFront();
		System.out.println(lst.print());
		lst.removeFromFront();
		System.out.println(lst.print());
		lst.removeFromFront();
		System.out.println(lst.print());
		
	}
}