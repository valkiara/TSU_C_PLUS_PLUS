#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

void task10()
{
	ifstream myReadFile;
	myReadFile.open("input.txt");
	vector<int> myVector;
	int num;

	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> num;
			myVector.push_back(num);
		}
	}
	myReadFile.close();

	int oddCount = 0;
	int between = 0;

	for (size_t i = 0; i < myVector.size(); i++)
	{
		if (myVector[i] % 2 != 0)
		{
			oddCount++;
		}

		if (myVector[i] <= 10 && myVector[i] <= 350)
		{
			between++;
		}
	}

	cout << "oddCount= " << oddCount << "\t" << "between= " << between << endl;

}