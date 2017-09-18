import java.math.*;
public class EuclidBigInt {
	public static void main(String[] args){
		//for(int n = 5; n <= 100; n++){ 
			//System.out.print("n = " + n + " GroupOfunitsMod " + " = {");
		//for(int m = 1; m < n; m++){
			//int j = euclid(n,m);
			//if((j*n) == n){
				//System.out.print(m + ",");
			//}
		//}
		//System.out.print("}\n");
	//}
		BigInteger n1, j1, m1, n2, j2, m2, n3, j3, m3;
		
		 n1 = new BigInteger("12821864831");
		 m1 = new BigInteger("11253185201");
		 n2 = new BigInteger("24");
		 m2 = new BigInteger("124");
		 n3 = new BigInteger("123546855");
		 m3 = new BigInteger("1122336655");
		 j1 = n1.gcd(m1);
		 j2 = n2.gcd(m2);
		 j3 = n3.gcd(m3);
			 String str = "n = " + n1 + " Group Of Units Mod = {" +  j1 + "}\nn = "  + n2 + " Group Of Units Mod = {" +  j2 + "}\nn = "  + n3 + " Group Of Units Mod = {" +  j3 + "}";
			 
			 System.out.println(str);
		 
		
		
	    
}
	public static int euclid(int n, int m){
		if(m ==0){
			return n;
		}
		else{
			return euclid(m, n%m);
		}
	}
	
	public static Object bigIntegerEuclid (BigInteger n, BigInteger m){
		if(m.equals(0)){
			return n;
		}else{
		
		return bigIntegerEuclid(m, n.mod(m));
		}
	}
}
