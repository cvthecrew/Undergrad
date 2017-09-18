import java.math.*;
import java.util.*;

public class BIfunctions{
	public static void main (String[] args) {
		Random rand = new Random();
		
		BigInteger a = new BigInteger(8, rand);
		BigInteger b = new BigInteger(8, rand);
		BigInteger n = new BigInteger(8, rand);
		
		System.out.println("a = " + a);
		System.out.println("b = " + b);
		System.out.println("n = " + n);
		
		System.out.println("Is Modulus a prime?" + n.isProbablePrime(30))
		
		System.out.println("gcd of a and b = " + a.gcd(b));
		
		BigInteger c = new BigInteger("139");
		BigInteger d = new BigInteger("212");
		
		System.out.println("The inverse of c mod d is = " c.modInverse(d));
		
		System.out.println("Proof: c*c^-1 = " + (c.multiply(c.modInverse())).mod(d));
		
		BigInteger seven = new BigInteger("7");
		BigInteger exp = new BigInteger("181");
		BigInteger mod = new BigInteger("561");
		System.out.println("Modular exponentiation: 7^181 mod 561 = " + (seven.modPow(exp,mod)));
		
		
	}
}