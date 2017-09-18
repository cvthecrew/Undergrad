// Split.java
import java.util.*;
public class Split{
	public static void main (String[] args){
		String data = textData.data;
		String[] wordArray = data.split(" \\s*");
		List<String> wordList = Arrays.asList(wordArray);
		Queue<String> queue =  new PriorityQueue<String>(wordList);
		
		//for(String s: wordArray){
			//Sytem.out.println(s);
		//}
		
		while (!queue.isEmpty()){
			System.out.println(queue.poll);
		}
		//System.out.println("The number of words in the collection = " + wordList.size());
	}
}