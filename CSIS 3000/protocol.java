//

import java.math.*;
import java.util.*;

public class protocol {
	public static void main (String[] args) {
		Random r = new Random();
		BigInteger p = BigInteger.probablePrime(512,r);
		BigInteger q = BigInteger.probablePrime(512,r);
		BigInteger n = p.multiply(q);
		String stringp = p.toString();
		String stringq = q.toString();
		String stringn = n.toString();
		BigInteger two = new BigInteger("2");
		BigInteger bit512 = two.pow(512);
		String stringbig512 = bit512.toString();
		
		System.out.println("p = " + p);
		System.out.println(stringp.length());
		
		System.out.println("q = " + q);
		System.out.println(stringq.length());
		
		System.out.println("n = " + n);
		System.out.println(stringn.length());
		
		System.out.println("bit512 = " + big512);
		System.out.println(stringbit512.length());
	}
}
