#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

//bileti 1

void printCharVector(vector<char> vec)
{
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ";";
	}
	cout << endl;

}

void task24()
{
	ifstream myReadFile;
	myReadFile.open("symbols.txt");

	char x;
	vector<char> allChars;
	vector<char> upperCaseChars;


	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> x;
			allChars.push_back(x);
		}
	}

	for (size_t i = 0; i < allChars.size(); i++)
	{
		if (isupper(allChars[i]))
		{
			upperCaseChars.push_back(allChars[i]);
		}
	}

	cout << "Printing all characters" << endl;
	printCharVector(allChars);

	cout << "Printing upper case characters" << endl;
	printCharVector(upperCaseChars);

	sort(allChars.begin(), allChars.end());


	cout << "Printing sorted all characters" << endl;
	printCharVector(allChars);

	cout << "Printing sorted upper case characters" << endl;
	printCharVector(upperCaseChars);
}