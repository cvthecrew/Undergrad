import java.math.*;
import java.util.*;


public class RSA3 {
	public static String[] clearText;
	public static String[] encode;
	public static String[] decode;
	
	public static BigInteger n = BigInteger.ONE;
	public static BigInteger exponent = BigInteger.ONE;
	public static BigInteger inverse = BigInteger.ONE;
	
	public static void main(String[] args){

		RSA3 t = new RSA3();
		int i = mainMenu();
		String message = "";
		
		if(i == 1){
			t.encryptMenu();
			
		}
		
		else{
			message = t.decryptMenu();
			
			t.storeEncode(message);
			
			System.out.println("Encode array currently contains: " + Arrays.toString(encode));
			
			t.Decryption();
			System.out.println("Decrypted ascii blocks: "+Arrays.toString(decode));
			System.out.println("Decrypted blocks length: " + decode[0].length());
				
			System.out.println("");
				
			System.out.println("Decoded text: \n"+AsciiToText());
			
		}
	}

	public static int mainMenu(){
		Scanner in = new Scanner(System.in);
		int g = 0;
		
		System.out.println("Welcome to RSA Encrypt/Decrypt services!");
		System.out.println("");
		System.out.println("To encrypt a message, enter 1");
		System.out.println("To decrypt a message, enter 2");
		System.out.println("");
		System.out.println("Enter your choice: ");
		
		int choice = in.nextInt();
		
		if(choice == 1){
			return 1;
		}
		
		else if(choice == 2){
			return 2;
		}
		
		else{
			g = mainMenu();
		}
		return g;
	}
	
	public void encryptMenu(){
		Scanner encryptScan = new Scanner(System.in);
		int ch = 0;
		
		System.out.println("If you would like to generate an encryption key, enter 1");
		System.out.println("If you would like to encrypt a message using an existing key, enter 2");
		System.out.println("Enter your choice: ");
		
		ch = encryptScan.nextInt();
		
		if(ch == 1){
			EncryptionKey();
			
			System.out.println("Exponent: "+ exponent +"\nexp length: "+exponent.toString().length());
			System.out.println("N value: "+n+"\nn length: "+n.toString().length());
			System.out.println("Inverse value: "+inverse);
		}
		else if(ch == 2){
			System.out.println("Please enter the message to be encrypted: ");
			String messages = new String(encryptScan.nextLine());
			String message = new String(encryptScan.nextLine());
			
			System.out.println("Please enter your n value: ");
			BigInteger nInt = new BigInteger(encryptScan.nextLine());
			n = nInt;
			
			System.out.println("Please enter your exp value: ");
			BigInteger expInt = new BigInteger(encryptScan.nextLine());
			exponent = expInt;
			
			TextToAscii(message);
			
			System.out.println("Clear text ascii blocks: "+Arrays.toString(clearText));
			System.out.println("Clear text length: "+clearText[0].length());
		
			System.out.println("");
			
		
			System.out.println("Exponent: "+ exponent +"\nexp length: " + exponent.toString().length());
			System.out.println("N value: "+n+"\nn length: "+n.toString().length());
			System.out.println("Inverse value: "+inverse);
			
			Encryption();
			
			System.out.println("");
			
			System.out.println("Encoded blocks: "+Arrays.toString(encode));
			System.out.println("Encoded blocks length"+encode[0].length());
		
			System.out.println("");
		}
		else{
			encryptMenu();
		}
	}
	
	public static String decryptMenu(){
		Scanner nScan = new Scanner(System.in);
		
		System.out.println("Please enter your encrypted blocks: ");
		String messageIn = new String(nScan.nextLine());
		String message = messageIn;
		
		System.out.print("Please enter your n value: ");
		BigInteger nIn = new BigInteger(nScan.nextLine());
		n = nIn;
		
		System.out.print("Please enter your inverse exp value: ");
		BigInteger invIn = new BigInteger(nScan.nextLine());
		inverse = invIn;
		
		System.out.print("");
		
		return message;
	}
	
	public static String[] TextToAscii(String message){
		String block = "";
		String newBlock = "";
		clearText = new String[(message.length()/100)+1];
		int x;
		int y = 0;
		
		for(int i = 0; i < message.length(); i++){
			if(i==0){
				for(int j = 0; j < clearText.length; j++){
					clearText[j] = "";
				}
			}
			newBlock = "";
			x = message.charAt(i);
			newBlock = "" + x;
			if(x < 10){
				newBlock = "0" + newBlock;
			}
			if(x < 100){
				newBlock = "0" + newBlock;
			}
			if(i % 100 == 0 && i != 0){
				y++;
			}
			clearText[y] += newBlock;
		}
		
		for(;clearText[y].length() < 300;){
			clearText[y] = "0" + clearText[y];
		}		
		
		
		return clearText; 
		
	}
	
	public static BigInteger[] EncryptionKey(){
		BigInteger p = BigInteger.ONE;
		BigInteger q = BigInteger.ONE;
		BigInteger y = new BigInteger("256");
		BigInteger x = new BigInteger("10");
		Random r1 = new Random();
		Random r2 = new Random();
		
		x = x.pow(297);
		y = y.multiply(x);
		
		while(n.toString().length() != 300 || n.compareTo(y) != 1){
			p = new BigInteger(500, r1);
			q = new BigInteger(500, r2);
			p = p.nextProbablePrime();
			q = q.nextProbablePrime();
			
			n = p.multiply(q);
		}
		exponent = new BigInteger(50,r1);
		exponent = exponent.nextProbablePrime();
		
		p = p.subtract(BigInteger.ONE);
		q = q.subtract(BigInteger.ONE);
		BigInteger phi = p.multiply(q);
		inverse = exponent.modInverse(phi);
		
		BigInteger[] nei = {n, exponent, inverse};
		return nei;
		
	}
	public static String[] Encryption(){
		String number = "";
		BigInteger calulate = BigInteger.ONE;
		BigInteger encodeCalulate = BigInteger.ONE;
		encode = new String[clearText.length];
			
		for(int i = 0; i < encode.length; i++){
			encode[i] = "";
		}
		
		for(int j = 0; j < clearText.length; j++){
			calulate = new BigInteger(clearText[j]);
			encodeCalulate = calulate.modPow(exponent, n);
			number = encodeCalulate.toString();
			encode[j] = number;
		}
		
		for (int k = 0; k < encode.length; k++){
			for(;encode[k].length() < 300;){
				encode[k] = "0" + encode[k];
			}
		}
		return encode;
	}
	
	public static String[] Decryption(){
		String number = "";
		BigInteger calulate = BigInteger.ONE;
		BigInteger decodeCalulate = BigInteger.ONE;
		
		System.out.println("Encode array currently contains: " + Arrays.toString(encode));
		
		decode = new String[encode.length-1];
		for(int i = 0; i < decode.length; i++){
			decode[i] = "";
		}
		
		for(int j = 0; j < decode.length; j++){
			calulate = new BigInteger(encode[j]);
			decodeCalulate = calulate.modPow(inverse, n);
			number = decodeCalulate.toString();
			decode[j] = number;
		}
		
		for(int k = 0; k < decode.length; k++){
			for(;decode[k].length() < 300;){
				decode[k] = "0" + decode[k];
			}
		}
		return decode;
			
	}
	public static String AsciiToText(){
		int x;
		char c;
		String re = "";
		for(int i = 0; i < decode.length; i++){
			for(int j = 0; j < 100; j ++){
				x = Integer.valueOf(decode[i].substring(0, 3));
				c = (char)x;
				if(x != 0){
					re += c;
				}
				decode[i] = decode[i].substring(3, decode[i].length());
			}
		}
		return re; 
	}
	
	public static String[] storeEncode(String message){
		String tempBlock = "";
		encode = new String[(message.length()/300)+1];
		char x;
		int spot = 0;
		for(int i = 0; i < message.length(); i++){
		    
			if(i == 0){
				for(int j = 0; j < encode.length; j++){
					encode[j] = "";
				}
			}
		
			tempBlock = "";
			x = message.charAt(i);
			tempBlock = "" + x;
			
			if(i%300 == 0 && i != 0)
				spot++;
			// store in array
			encode[spot] += tempBlock;
		}
		// Pad block with zeros in front so that it matches 300 digits
		//for(;clearText[spot].length() < 300;){
			//clearText[spot] = "0"+clearText[spot];
		//}
		
		return encode;
	}
}
