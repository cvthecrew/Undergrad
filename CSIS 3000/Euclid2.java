//

import java.math.*;
import java.util.*;

public class Euclid2 {
	public static int count = 0; 
	
	public static void main(String[] args){
		long start;
		long end;
		Random rand = new Random();
		
		start = System.currentTimeMillis();
		BigInteger n = new BigInteger(2048, rand);
		BigInteger m = new BigInteger(2048, rand);
		
		for(int i = 1; i <= 10; i++){
			System.out.println("n = " + n);
			System.out.println("m = " + m);
			System.out.println("gcd(n,m) = " + gcd(n,m));
			System.out.println("The number of call to ocur method: " = count);
		}
		end = System.currentTimeMillis();
		System.out.println("Computation time = " + (end - start);
	}
	
	public static BigInteger gcd(BigInteger n, BigInteger m){
	++count;
		if(m.compareTo(BigInteger.ZERO) == 0){
			return n;
		}
		return gcd(m, n.mod(m));
	}
	
}