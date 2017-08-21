/**
 * 
 * @author 
 * @version
 *
 */

public class HugeInteger {
	public int a [] = new int [99];
	public String as [] = new String [99];
	String s = "";
	/** 
	 * This constructor uses the values in 'a' which represent a very large (or even small) integer
	 * Make a deep copy, not a shallow copy of the integer array
	 * 
	 * @param a the digits in the integer
	 */
	public HugeInteger(int[] a){
		for(int i = 0; i < a.length; i++){
			this.a[i] = a[i];
		}
	}
	
	/**
	 * Make sure that you remove the leading 0's, as your array should
	 * have 100 spots, but the number may be smaller than that.
	 * 
	 * Also, strings append using +
	 * 
	 * Also, you may need to start at spot 99 and go down, depending on how you do it 
	 * 
	 * @return the integer represented as a string
	 */
	@Override
	public String toString(){
	for(int i = 0; i < this.a.length-1; i++) {

		
			
		if(a[i] == 0 && a[i+1] == 0) {
			foundANumber = true;
		}

		if(foundANumber == true){
			as[i] = Integer.toString(a[i]);
			s = "" + s + a[i];
		}
		
	  }
		return s;
	}

	
	/**
	 * This method returns true if the object contains the same values as h, false otherwise
	 * @param h the object to compare the current object to
	 * @return true if the current object equals h, false otherwise
	 */
	public boolean isEqualTo (HugeInteger h){
		if(h.s.equals(this.s)) {
			return true;
		}
		return false;
	}

	/**
	 * This method returns true if the object does not contain the same values as h, true otherwise
	 * @param h the object to compare the current object to
	 * @return false if the current object equals h, true otherwise
	 */
	public boolean isNotEqualTo (HugeInteger h){
		if(h.s.equals(this.s)) {
			return false;
		}
		return true;
	}

	/**
	 * This method returns true if the current object is less than h, false otherwise
	 * 
	 * Note: you need to start at the large side
	 * 
	 * 
	 * @param h the HugeInteger to compare the current object to
	 * @return true if the current object is less than h, false otherwise
	 */
	public boolean isLessThan (HugeInteger h){
		return false;
	}

	/**
	 * This method returns true if the current object is greater than h, false otherwise
	 * 
	 * Note: you need to start at the large side
	 * 
	 * @param h the HugeInteger to compare the current object to
	 * @return true if the current object is greater than h, false otherwise
	 */
	public boolean isGreaterThan (HugeInteger h){
		return true;
	}

	/**
	 * This method returns true if the current object is less than or equal to h, false otherwise
	 * @param h the HugeInteger to compare the current object to
	 * @return true if the current object is less than or equal to h, false otherwise
	 */
	public boolean isLessThanOrEqualTo (HugeInteger h){
			return false;
	}

	/**
	 * This method returns true if the current object is greater than or equal to h, false otherwise
	 * @param h the HugeInteger to compare the current object to
	 * @return true if the current object is greater than or equal to h, false otherwise
	 */
	public boolean isGreaterThanOrEqualTo (HugeInteger h){
		return false;
	}

	/**
	 * This method adds h to the current object.
	 * @param h the HugeInteger to add to the current object
	 */
	public void add (HugeInteger h){
		
	}
	
	/**
	 * This method subtracts h from the current object
	 * @param h the HugeInteger to subtract from the current object
	 */
	public void subtract (HugeInteger h){

	}
}
