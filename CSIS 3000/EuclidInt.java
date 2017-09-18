public class EuclidInt{
	public static void main(String[] args){
		int n = 13;
		for(int i = 1; i <= 100; i++){
			String str = i + " " + euclid(n,i);
			System.out.println(str);
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

