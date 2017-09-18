//Alexander Cannell
//CSIS 3600

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.attribute.BasicFileAttributes;

public class FileClass {

	public static void main(String argv[]) {
		Path path = Paths.get(System.getProperty("user.home"), "myFile.txt");
		
		BasicFileAttributes attributes = null;
		

		StringBuilder outBuff = new StringBuilder();
		
		outBuff.append("File: " + path);
		outBuff.append("\n");
		outBuff.append("\t").append("Created: " + attributes.creationTime());
		outBuff.append("\n");
		outBuff.append("\t").append("Accessed: " + attributes.lastAccessTime());
		outBuff.append("\n");
		outBuff.append("\t").append("Modified: " + attributes.lastModifiedTime());
		outBuff.append("\n");

		
		System.out.println(outBuff.toString());
	}
}