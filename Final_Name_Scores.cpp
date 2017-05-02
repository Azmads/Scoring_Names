#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


	void nameCount(fstream &infile) {
		char arr1[12];
		int nameSum = 0;
		string line;
		while(!infile.eof()) {
			getline(infile, line);
			stringstream ss(line);
			ss >> arr1;
			int i = 0;
			for (i; i < strlen(arr1) -1; i++) {

				nameSum = arr1[i] + nameSum;

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
	
	int main()
	{
		fstream infile;

		infile.open("names.txt");
		alphaVal();
		nameCount(infile);

		infile.close();
	}



