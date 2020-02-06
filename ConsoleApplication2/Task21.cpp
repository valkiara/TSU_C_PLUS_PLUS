#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<int> File21()
{
	ifstream myReadFile;
	myReadFile.open("ints.txt");
	vector<int> myVector;
	int x;

	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> x;
			myVector.push_back(x);
		}
	}

	myReadFile.close();

	return myVector;
}
bool ArisTuAra(int M) {
	if (M >0 && M%7==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void task21()
{
	vector<int> myvec2 = File21();
	
	for (size_t i = 0; i < myvec2.size(); i++)
	{
		if (i > 0 && i % 9 == 0)
		{
			cout << endl;
		}
		cout << myvec2[i] << "\t";
	}
	cout << endl;

	int maxIndex = -1;
	for (size_t i = 0; i < myvec2.size(); i++)
	{
		if (ArisTuAra(myvec2[i]))
		{
			if (maxIndex == -1)
				maxIndex = i;
			if (myvec2[maxIndex] < myvec2[i])
			{
				maxIndex = i;
			}
		}
	}

	cout << "Biggest Numb: " << myvec2[maxIndex] <<" meeqvse xarisxis fesvi " <<pow(myvec2[maxIndex], 1/6)<< endl;
}