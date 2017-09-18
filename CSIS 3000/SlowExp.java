import java.math.*;

public class SlowExp {
	public static void main (String[] args) {
		BigInteger a = new BigInteger("1234567"); //Base 
		BigInteger product = BigInteger.ONE; 
		BigInteger modulus = new BigInteger("561"); //Modulus == mod
		
		int b = 181; //exponent
		
		for (int i = 1; i <= b; i++){
			product = product.multiply(a);
			product = product.mod(modulus);
			System.out.println(a + "^" + i + " = " + product);
		}
		System.out.println("ans = " + product.mod(modulus);
	}
}