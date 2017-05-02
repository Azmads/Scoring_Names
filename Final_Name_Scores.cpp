#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


	void nameCount(fstream &infile) {			//ready function for passing file by reference
		char arr1[12];					//initialize array big enough to fit biggest name
		int nameSum = 0;
		string line;
		while(!infile.eof()) {				//read until end of file
			getline(infile, line);			//store each name in line variable
			stringstream ss(line);
			ss >> arr1;				//store name into array
			int i = 0;
			for (i; i < strlen(arr1) -1; i++) {

				nameSum = arr1[i] + nameSum;	//sum of each line
								//of letters added
			}
		}
		cout << nameSum << endl;
	}

	void alphaVal() {				//give each letter of 
							//alphabet a value
		char alphaChar[25];
		int i = 0;
		for (i; i < 26; i++) {
			alphaChar['a' + i] = i+1;		
		}
	}
	
	int main()					//execute main file
	{
		fstream infile;				//ready file for write/read

		infile.open("names.txt");		//open file("names.txt") 
		alphaVal();				//call function to give letters value
		nameCount(infile);			//call function to sum file

		infile.close();				//close file

		getchar();				//keep debug window open
	}


