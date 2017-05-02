#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class names {
public:
	//int lineArray(fstream &infile) {	//make array based
		//int n;							//on longest name
		//while (getline(infile, line)) {
			//int biggest_name = 0;
			
			//if (line.length > biggest_name)
				//biggest_name = line.length;
			//n = biggest_name;
		//}
		
		//int *arr_p;					//dynamically allocate arr length
		//arr_p = new int[n];

	//}




	void nameCount(fstream &infile) {
		char arr1[10];
		int nameSum = 0;
		alphaVal();
		while(getline (infile, line)) {
			istringstream ss(line);

			ss >> arr1;
			int i = 0;
			for (i; i < sizeof(arr1) -1; i++) {

				nameSum = int(arr1[i]) + nameSum;
				

			}

		

		}
		cout << nameSum << endl;;
	}

	void alphaVal() {				//give each letter of 
								//alphabet a value
		char alphaChar[25];
		int i = 0;
		for (i; i < 26; i++) {
			
			alphaChar['a' + i] = i+1;
			
		}
	}
	

private:
	string line;
};

int main()
{

	fstream infile;

	infile.open("names.txt");

	names nameCount();
	
	infile.close();

	cout << "Yes please" << endl;

	getchar();
}

