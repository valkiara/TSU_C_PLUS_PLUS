#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void task2()
{
	vector<double> myVector;

	while (myVector.size() != 22)
	{
		double x;
		cin >> x; // Get user input from the keyboard
		myVector.push_back(x);
	}
	int diff = 0;

	for (size_t i = 0; i < myVector.size(); i++)
	{
		if (myVector[i] != 5.75)
		{
			diff++;
		}
	}

	ofstream myfile;
	myfile.open("diff.txt");
	myfile << diff;
	myfile.close();
}