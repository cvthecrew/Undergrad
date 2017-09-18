//using the file class
//usage: FileClass filename
//javadocs Class File

import java.io.*;
import java.util.*;

public class FileClass{
	pubic static void main(String[] args) throw IOException{
		//Construct a file object for the given file
		File f = new File(args[0]);
		//see if file exists
		if (f.exists()){
			System.out.println("File Found");
		}
		else 
			System.out.println("file NOT Found");
		}
		System.out.println("the cannical path: " + f.getCanonicalPath());
		
		if(f.canRead()){
			System.out.println("file s readable");
		}
		if(f.canWrite()){
			System.out.println("file s Writeable");
		}
		
	}
}