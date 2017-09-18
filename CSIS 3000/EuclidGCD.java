public class EuclidGCD{
	public static void main(String[] args){
		for(int n = 5; n <= 100; n++){ 
			System.out.print("n = " + n + " GroupOfunitsMod " + " = {");
		for(int m = 1; m < n; m++){
			int j = euclid(n,m);
			if((j*n) == n){
				System.out.print("," + m);
			}
		}
		System.out.print("}\n");
	}
}
	public static int euclid(int n, int m){
		if(m ==0){
			return n;
		}
		else{
			return euclid(m, n%m);
		}
	}

}