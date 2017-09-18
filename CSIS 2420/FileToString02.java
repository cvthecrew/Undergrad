// Writing a file to a string 
// Usage: java FileToString awmt.txt

import java.io.*

public class FileToString{

	public static void main(string[] args) throws IOException{
		String data = FileToString("./awmt.txt");
		data = data.replace('"', ' ');
		data = data.replace('\'', ' ');
		data = data.replace('\n', ' ');
		data = data.replaceALL("[.,;-?]", "");
		System.out.println(data);
	}
	
	public static String FileToString(String fileName){
		String result = "";
		try{
			FileInputStream file = new FileInputStream(fileName);
			byte[] b = new byte[file.available()];
			file.read(b);
			file.close();
			result = new String(b)l;
		}
		catch(Exception e){
		}
		return result;
		
	}

}

