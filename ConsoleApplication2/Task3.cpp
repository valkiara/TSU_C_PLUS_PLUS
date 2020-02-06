#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void task3()
{
	ifstream myReadFile;
	myReadFile.open("input.txt");

	double x;
	vector<double> myVector;


	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> x;
			myVector.push_back(x);
		}
	}

	for (size_t i = 0; i < myVector.size(); i++)
	{
		cout << "Org. Number\t" << myVector[i] << "\tfesvi\t" << sqrt(myVector[i]) << "\tgantoleba\t" << (12*myVector[i] - 21) / pow(myVector[i], 2) << endl;
	}

	myReadFile.close();
}