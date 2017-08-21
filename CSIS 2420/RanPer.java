import java.util.*;

public class RanPer {

	/**
	 * @author Alexander Cannell
	 * @CSIS 3000
	 */
	public static void main(String[] args) { 
		System.out.println(print());
		
	}
	
	public static int[] RandomPermutation(int n){
		
		int[] array = new int[n];
	    for(int i = 0; i < array.length; i++)
	        array[i] = i;

	    for(int i = 0; i < n; i++){

	        Random rand = new Random();
	        
	        int ran = i + rand.nextInt (n-i);

	   
	        int temp = array[i];
	        array[i] = array[ran];
	        array[ran] = temp;
	    }                       
	    return array;
	}
	
	public static String print(){
		String re = "";
		int[] a = RandomPermutation(1000);
		re += "Random Permutation = " + sysArr(a) + "\n";
		return re;
	}
	
	public static String sysArr(int[] n){
		String arr = "";
		for(int i = 0; i < n.length; i++){
			arr += ", "+n[i];
		}
			arr = arr.substring(2);
			arr = "["+arr+"]";
		return arr;
	}
}
