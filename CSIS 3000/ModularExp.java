import java.math.*;

public class ModularExp {
	public static void main (String[] args) {
		int a = 7;
		int b = 181;
		int n = 561;
		
		System.out.println(modexp(a,b,n);
	}
	
	Public static int modexp(int a, int b, int n) {
		int d = 1;
		String bin = Integer.toBinarySting(b);
		System.out.println(bin);
		for (int i = 0; i< bing.length(); i++)
			d= (d*d)%n;
			if(bin.charAt(i) == '1') {
				d= (d*a)%n;
			}
			System.out.println(d);
		}
		return d;
	}
}
		
		
