#include <fstream>

using namespace std;

void task8()
{
	ifstream myReadFile;
	myReadFile.open("data.txt");


	ofstream myfile;
	myfile.open("product.out");
	int num;

	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> num;
			if (num % 2 != 0)
			{
				myfile << num << endl;;
			}
			else
			{
				myfile << (num / 100) * (num % 100 / 10) * (num % 100 % 10) << endl;;
			}
		}
	}


	myfile.close();
	myReadFile.close();
}