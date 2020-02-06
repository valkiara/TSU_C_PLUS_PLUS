#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


vector<string> readFile()
{
	ifstream myReadFile;
	myReadFile.open("words.txt");
	vector<string> myVector;
	string word;

	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> word;
			myVector.push_back(word);
		}
	}

	myReadFile.close();

	return myVector;
}


void printVector(vector <string> x, int colCount) {

	for (size_t i = 0; i < x.size(); i++)
	{
		if (i > 0 && i % colCount == 0)
		{
			cout << endl;
		}
		cout << x[i] << "\t";
	}

	cout << endl;
}


char checkA(string x) {
	return x[1];
}



void task19()
{
	vector<string> xvector = readFile();

	printVector(xvector, 3);

	int maxIndex = -1;


	for (size_t i = 0; i < xvector.size(); i++)
	{
		if (checkA(xvector[i]) == 'a')
		{
			if(maxIndex == -1)
				maxIndex = i;
			if (xvector[maxIndex] < xvector[i])
			{
				maxIndex = i;
			}
		}
	}

	cout <<"Biggest Word: " << xvector[maxIndex] << " MAxIndex: " << maxIndex << endl;




}