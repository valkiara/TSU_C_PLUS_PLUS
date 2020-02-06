#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void task4()
{
	ifstream myReadFile;
	myReadFile.open("samsh.txt");

	int num1;
	int num2;


	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> num1;
			myReadFile >> num2;
		}
	}

	num1 = num1 / 10;
	num2 = num2 / 10;

	if (num1 > num2)
	{
		cout <<num1 * 10 + 7 << endl;
		cout <<7 * 10 + num1 << endl;
	}
	else
	{
		cout << num2 * 10 + 7 << endl;
		cout << 7 * 10 + num2 << endl;
	}
	

	myReadFile.close();
}