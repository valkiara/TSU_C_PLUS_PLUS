#include <fstream>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


void PrintVector(vector<char> myVector);

void task15()
{
	ifstream myReadFile;
	myReadFile.open("data.txt");
	vector<char> myVector;
	vector<char> myVector1;
	char simb;

	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> simb;
			myVector.push_back(simb);
		}
	}

	myReadFile.close();

	for (auto x : myVector)
	{
		if (islower(x))
		{
			myVector1.push_back(x);
		}
	}

	PrintVector(myVector);
	PrintVector(myVector1);


	sort(myVector.begin(), myVector.end());
	sort(myVector1.begin(), myVector1.end());

	PrintVector(myVector);
	PrintVector(myVector1);

}

void PrintVector(vector<char> myVector)
{
	for (auto x : myVector)
	{
		cout << x;
	}
	cout << endl;
}


