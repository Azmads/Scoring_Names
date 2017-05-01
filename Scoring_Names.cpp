#include <iostream>
#include <fstream>
#include <string>


using namespace std;

class names {
public:
	void lineArray(fstream &infile) {	//make array based
		int n;							//on longest name
		while (getline(infile, line)) {
			int biggest_name = 0;
			
			if (line.length > biggest_name)
				biggest_name = line.length;
			n = biggest_name;
		}
		
		int *arr_p;					//dynamically allocate arr length
		arr_p = new int[n];

	}

	void nameCount(fstream &infile) {
		char arr1[10];

		while(getline (infile, line)) {
			
			

		}

	}

	int alphaVal() {				//give each letter of 
								//alphabet a value
		char alphaChar = 'a';
		int i = 0;

		for (i; i < 27; i++) {
			
			alphaChar++;
		}
	}
	

private:
	string line;

};

int main()
{
	

	names alphaVal;

	fstream infile;

	infile.open("names.txt", ios::out | ios::in);

	names nameCount;


	infile.close();

}



