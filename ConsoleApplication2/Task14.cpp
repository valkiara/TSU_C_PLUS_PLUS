#include <vector>
#include <iostream>

using namespace std;

void task14()
{
	vector<int> v = { 11,-23,23,2,4,-5 };
	int n = 0;
	int i = 0;
	//int n = 0;

	/*for (int i = 0; i < v.size(); i++)
		if (v[i] >= 0) n++;*/

	/*while (i < v.size())
	{
		if (v[i] >= 0) n++;
		i++;
	}*/

	for (auto x : v)
	{
		if (x >= 0) n++;
	}

	cout << "pasuxi: " << n << endl;

}