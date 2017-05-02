#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

void alphabetList(fstream &infile, fstream &outfile) {
	string nameList[6000];
	string line;
	int i = 0;
	while (!infile.eof()) {				//make array of names
		getline(infile, line);
		nameList[i] = line;
		i++;
		}
	
	sort(begin(nameList), end(nameList));		//sort names in alphabetical in array
	int j = 0;
	for (j; j < sizeof(nameList) -1 ; j++) {
		if(!nameList[j].empty()) {
			outfile << nameList[j] << endl;	//rewrite alphabetical list to file
		}
	}
}


	void nameCount(fstream &infile) {		//ready function for passing file by reference
		char arr1[12];				//initialize array big enough to fit biggest name
		string line;
		int final_Score = 0;
		int listPosition = 1;
		while(!infile.eof()) {			//read until end of file
			getline(infile, line);		//store each name in line variable
			stringstream ss(line);
			ss >> arr1;			//store name into array
			int listPosition = 1;		//initialize position of name variable
			int nameSum = 0;
			int nameProduct = 0;

			int i = 0;
			for (i; i < strlen(arr1) -1; i++) {

				nameSum = arr1[i] + nameSum;				//sum of each line
				nameProduct = nameSum * 	listPosition;		//sum * position of name in list	
			}
			final_Score = nameProduct + final_Score;
			listPosition++;							//iterating position after every line
		}
		cout << final_Score << endl;						//print name score
	}

	void alphaVal() {				//give each letter of 
							//alphabet a value
		char alphaChar[25];
		int i = 0;
		for (i; i < 26; i++) {
			alphaChar['a' + i] = i+1;		
		}
	}
	
	int main()						//execute main file
	{
		fstream infile,outfile;				//ready file for write/read

		infile.open("names.txt");			//open file("names.txt") 
		outfile.open("names.txt");
		alphaVal();					//call function to give letters value
		alphabetList(infile, outfile);
		nameCount(outfile);				//call function to sum file

		infile.close();					//close file
		outfile.close();
		getchar();					//keep debug window open
	}



