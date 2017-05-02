#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

void alphabetList(ifstream &infile, ofstream &outfile) {
	string nameList[6000];
	string line;
	int i = 0;
	infile.open("names.txt");
	while (!infile.eof()) {				//make array of names
		getline(infile, line);
		nameList[i] = line;
		i++;
		}

	
	sort(begin(nameList), end(nameList));	//sort names in alphabetical in array
	for (int k = 0; k < 6000; k++) {

		if (!nameList[k].empty()) {
			cout << nameList[k] << endl;
		}
		k++;
	}
}


	
	int main()						//execute main file
	{
		ifstream infile;
		ofstream outfile;				//ready file for write/read

		
		
		alphabetList(infile, outfile);			//call alphabetical function
		
		
		getchar();					//keep debug window open
	}
