#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

//bileti 1
double foo(double x)
{
	if (x < 3)
		return 5 * x;

	if (x > 3)
		return x - 4;

	return x;
}

void task23()
{
	vector<double> myVector;

	while (myVector.size() != 39)
	{
		double x;
		cin >> x; // Get user input from the keyboard

		myVector.push_back(foo(x));
	}

	//standartuli algoritmi
	int count = count_if(myVector.begin(), myVector.end(), [](double i) {return i == 12.25; });

	cout << "Count: " << count << endl;
}

