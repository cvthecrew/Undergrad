//

import java.Applet;
import java.math.*;

public class MyFactorial extends Applet{
	Public static woid main (String[] arg) {
	System.out.println(bigfactorial(5));
	}
	public static String bigfactorial(int n) {
	BigInteger one = BigInteger.ONE;
	BigInteger counter = BigInteger.ZERO;
	BigInteger value = one;
	
	for(int i = 1; 1 <= n; i++){
		counter = counter.add(one);
		value=value.multiply(counter);
		
	}
	return value.toString();
	}
	}
	
}