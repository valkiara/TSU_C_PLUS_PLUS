#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<int> MyV5(){
	vector<int>myv;
	while (myv.size() != 52)
	{
		int x;
		cin >> x;
		myv.push_back(x);
	}
	return myv;
}

bool ArisTuAraLuwi(int N) {
	if (N%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void task22()
{
	vector<int> myVE = MyV5();
	for (size_t i = 0; i < myVE.size(); i++)
	{
		if (i > 0 && i % 5 == 0)
		{
			cout << endl;
		}
		cout << myVE[i] << "\t";
	}
	cout << endl;

	int maxIndex = -1;
	for (size_t i = 0; i < myVE.size(); i++)
	{
		if (ArisTuAraLuwi(myVE[i]))
		{
			if (maxIndex == -1)
				maxIndex = i;
			if (myVE[maxIndex] < myVE[i])
			{
				maxIndex = i;
			}
		}

		ofstream myfile;
		myfile.open("pasuxiout.txt");
		myfile << maxIndex;
		myfile.close();
	}
}