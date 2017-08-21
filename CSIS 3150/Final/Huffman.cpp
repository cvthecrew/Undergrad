#include <iostream>
#include <string>
#include <sstream>
#include <queue>
#include <fstream>
#include <windows.h>

class dataGet(){
	String data;
	int temp;
	
	cout << "Press One for a File! \n";
	cout << "Press Two for user input! \n";
	cout << "Press Three if you want to know more! \n";
	//Press Four for Narnia!
	cin >> temp;
	
	//Takes a file
	
	if(temp == 1){
		String temp2;
		unsigned char b [];
		cout << "Please make sure that your file is in the main directory of the Huffman Encoder, then enter the exact file name.\n";
		cin >> temp2;
		
		try{
			ifstream file;
			file.open(temp2);
			if (file.is_open){
			file >> b[];
			file.close();
			}
			else {
			cout << "Unable to open file";
			}
		}
		
		catch(std::istream;;failure){
			cout << "Failed to load file. Using \"Huffman\" instead.";
			data = "Huffman";
		}
		return data; 
	}
	
	//Takes a String
	
	if (temp == 2){
		cout << "Input string: \n";
		cin >> data;
		cout << "\n";
		if (data == ""){
			cout << "You didnt enter any Data! Using \"Huffman\" instead. Stupid";
			data = "Huffman";
		}
		return data;
	}
	
	// Gives you more information
	if (temp == 3){
		cout << "\nHuffman Encoder programmed by Alexander Cannell, Nathan Erickson & Chris Kelly\n";
		cout << "Final Project CSIS 2420\n";
		cout << "With large amounts of data the program will sort based on the first digit\nof the number, ex. 1024 will be next to 10.\n"
		
		data = dataGet();
		return data;
		
	}
	
	// Narnia
	if (temp == 4){
		cout << "YOU FOUND NARNIA!!!\n";
		cout << "\n";
		cout << "\n";
		char url1[1000] = "http://global3.memecdn.com/narnia_o_990009.jpg";
		std::fstream fs;
		fs.open(url1);
		fs.close();
		
		Sleep(300000);
		
		char url2[1000] = "http://weknowmemes.com/wp-content/uploads/2012/05/wait-a-minute-this-isnt-narnia.jpg";
		fs.open(url2);
		fs.close();
		
		Sleep(300000);
		
		data = dataGet();
		return data;
	}
	
	// If all else fails...
	else if{
		cout << "Sorry, I didn't understand that.";
		data = dataGet();
		return data;
	}
	
	return data;
	
}