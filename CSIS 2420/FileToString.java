// Writing a file to a string 
// Usage: java FileToString awmt.txt

import java.io.*

public class FileToString{

	public static void main(string[] args) throws IOException{
		FileInputStream file = new FileInputStream(args[0]);
		byte[] b = new byte[file.available()];
		System.out.println("Number of bytes in this file = " + file.available());
		file.read(b);
		file.close();
		String result = new String(b);
		System.out.println(result);
		for(int i = 0; i <=b.length; i++){
			System.out.println(b[i]);
		}
	}

}

