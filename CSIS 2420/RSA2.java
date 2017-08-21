import java.applet.*;
import java.util.*;
import java.math.*;

/*
 * @Author Alexander Cannell
 * @CSIS 3000
 */


public class RSA2 {
	public static String[] clears; // Stores message in clear text ascii format, each spot contains 
    							// one block (100 letters == 300 digits)
	public static String[] encodes; // Stores message in encoded ascii format, same formatting as clearText
	public static String[] decrypted; // Stores decrypted message 
	
	
	public static BigInteger inverse = BigInteger.ONE; // Generated inverse of exp mod n
	public static BigInteger n = BigInteger.ONE;   // product of random prime p and q
	public static BigInteger exponent = BigInteger.ONE; // Random large prime
	
	
	public static void main(String[] args) {
		
		RSA2 t = new RSA2();
		
		String Message = "Please Enter Your Message: ";
	    System.out.println(Message + "");
		Scanner input = new Scanner(System.in);
		String message1 = input.nextLine();
		
		//System.out.println(message1);
		//t.ConvertToAscii("qwreuoiptyuiasfdghjkjkl;qweriupkj;kljasdfzxvcbnm,.m,njk;fasdi;kljasdfkj;akjsfdkdljfaskdfjiuweriqouekjasdf;kjpiwjefklasdf;jksadifjwjf;ajksdfije;ajfijdkjaeijaw;klfj;adklja;ijwef;kjadsfijasf;jadf;jeiwj;ajJFKJAKJF;ALJDjafdijwojiafpkjdnbafejariwjfkdjsaklfja;ksfjdkdlfjsakdfjsd;fkljasdfkjsadfkljsdfkjsadklfjsad;fj");
		t.ConvertToAscii(message1);
		t.genEncryptKey();
		
		
		  
		System.out.println("\nClearing the text ascii blocks: "+Arrays.toString(t.clears));
		System.out.println("The clear text length: "+t.clears[0].length()+ "\n");
		
		
		
		System.out.println("\nExponent value: "+t.exponent+"\nexponent length: "+t.exponent.toString().length());
		System.out.println("N value: "+t.n+"\nn length: "+t.n.toString().length());
		System.out.println("Inverse value: "+t.inverse + "\n");
		t.encrpytAscii();

		
		System.out.println("\nEncoding the data blocks: "+Arrays.toString(t.encodes));
		System.out.println("This is the Encoded blocks length: "+t.encodes[0].length() + "\n");
		
		
		t.decryptAscii();
		System.out.println("\nDecrypting ascii blocks: "+Arrays.toString(t.decrypted));
		System.out.println("This is the Decrypted blocks length: "+t.decrypted[0].length() + "\n");
		
		
		System.out.println("Decoded text: \n"+t.asciiToText());

	}
	
	// Converts a text message to ascii number values
	// Pads beginning of numbers so they all have 3 three digits
	public static String[] ConvertToAscii(String message){
			String block = "";
			String tempBlock = "";
			clears = new String[(message.length()/100)+1];
		int value;
		int spot = 0;
		for(int i = 0; i < message.length(); i++){
		    
			if(i == 0){
				for(int j = 0; j < clears.length; j++){
					clears[j] = "";
				}
			}
			// Convert text to ascii value
			tempBlock = "";
			value = message.charAt(i);
			tempBlock = ""+value;
			
			if(value < 10)
				tempBlock = "0"+tempBlock;
			
			if(value < 100)
				tempBlock = "0"+tempBlock;
			
			//block+=tempBlock;
			
			if(i%100 == 0 && i != 0)
				spot++;
			// store in array
			clears[spot] += tempBlock;
		}
		
		for(;clears[spot].length() < 300;){ // Pad block with zeros in front so that it matches 300 digits
			clears[spot] = "0"+clears[spot];
		}
		
		return clears;
	}
	
	// Generates a random RSA public key
	// Returns a BigInt array with values n, exponent, and inverse of exponent in that order
	public static BigInteger[] genEncryptKey(){
		// Initialize variables 
		
		BigInteger min = new BigInteger("256");
		BigInteger x = new BigInteger("10");
		x = x.pow(297);
		min = min.multiply(x);
		
		BigInteger p = BigInteger.ONE;
		BigInteger q = BigInteger.ONE;
		
		// Loop running until a 300 digit is computed from two large primes
		do{
		Random rand = new Random();
		p = new BigInteger(500, rand);
		q = new BigInteger(500, rand);
		p = p.nextProbablePrime();
		q = q.nextProbablePrime();
		
		n = p.multiply(q);
		//System.out.println("Generating N: "+n+"\nLength: "+n.toString().length());
		}while(n.toString().length() != 300 || n.compareTo(min) == 1);// && n.compareTo(maxsiz) == 1);
		//System.out.println("n length????: "+n.toString().length());
		// Compare n to a bigint with 299 digits all 9s and a number 300 digts (1000.....1)
		
		//System.out.println("n = "+n);
		
		// Generate random large prime for the exponent value
		Random rand = new Random();
		exponent = new BigInteger(500, rand);
		exponent = exponent.nextProbablePrime();
		
		//System.out.println("exponent = "+exponent);
		
		// Finding phi of n ( (p-1)*(q-1) ) then using that to find inverse of the exponent..
		// exponent^-1 mod phi
		p = p.subtract(BigInteger.ONE);
		q = q.subtract(BigInteger.ONE);
		BigInteger phi = p.multiply(q);
		inverse = exponent.modInverse(phi);
		
		//System.out.println("Inverse = "+inverse);
		
		// Returning n, exponent, and inverse in a bigint array
		BigInteger[] var = {n, exponent, inverse};
		return var;
	}
	//saves into an array and puts it in the n exponent
	
	// This takes the current plaintext ascii message and encrpyts it with the given exponent and n value
	public static String[] encrpytAscii(){
			String num = "";
			BigInteger cal = BigInteger.ONE;
			BigInteger enCal = BigInteger.ONE;
			encodes = new String[clears.length];
				for(int j = 0; j < encodes.length; j++){
					encodes[j] = "";
				}
			
		for(int i = 0; i < clears.length; i++){
			cal = new BigInteger(clears[i]);
			enCal = cal.modPow(exponent, n);
			num = enCal.toString();
			encodes[i] = num;
		}
			
		for(int k = 0; k < encodes.length; k++){
			for(;encodes[k].length() < 300;){
				encodes[k] = "0"+encodes[k];
			}
		}
		
		return encodes;
	}

	public static String[] decryptAscii(){
		
		String num = "";
		BigInteger cal = BigInteger.ONE;
		BigInteger enCal = BigInteger.ONE;
		decrypted = new String[encodes.length]; //input.length
			for(int j = 0; j < decrypted.length; j++){
				decrypted[j] = "";
			}
		
	for(int i = 0; i < decrypted.length; i++){
		cal = new BigInteger(encodes[i]);
		enCal = cal.modPow(inverse, n);
		num = enCal.toString();
		decrypted[i] = num;
	}
	
	for(int k = 0; k < decrypted.length; k++){
		for(;decrypted[k].length() < 300;){
			decrypted[k] = "0"+decrypted[k];
		}
	}
		
	
	return decrypted;
		
	}
	
	public static String asciiToText(){
		int output;
		char c;
		String message = "";
		for(int i = 0; i < decrypted.length; i++){
			for(int j = 0; j < 100; j++){
				output = Integer.valueOf(decrypted[i].substring(0,3));
				c = (char) output;
				if(output != 0)
				message += c;
				decrypted[i] = decrypted[i].substring(3,decrypted[i].length());
			}
		}
		
		return message;
	}
	
}

