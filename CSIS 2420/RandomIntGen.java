import java.util.Random;
public class RandomIntGen {
	/**
	 * @author Alexander Cannell
	 * @Date 08/30/12
	 * @Class CSIS-3650
	 */
	public static void main(String[] args) {
		int[]array = new int [1000000];
		Random ran = new Random();
		for (int i=0; i < array.length; i++){
			array[i]= ran.nextInt(1000000);
			System.out.print(array[i] + "\n");
		}
	}
}
