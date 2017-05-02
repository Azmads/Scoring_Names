#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

void alphabetList(fstream &infile) {
	const int size = 6000;
	string nameList[size];
	string line;
	int i = 0;
	infile.open("names.txt");
	while (!infile.eof()) {				//make array of names
		getline(infile, line);
		nameList[i] = line;
		i++;
		}
	infile.close();
	
	sort(begin(nameList), end(nameList));	//sort names in alphabetical in array
	
	fstream outfile("names.txt");

	for (int k = 0; k < size; k++) {			//write new alphabetical list to names.txt file
		if (!nameList[k].empty()) {
			outfile << nameList[k] << endl;
		}
	}
}


	
	int main()						//execute main file
	{
		fstream infile;
		ofstream outfile;				//ready file for write/read

		
		
		alphabetList(infile);
		
		
		getchar();					//keep debug window open
	}



