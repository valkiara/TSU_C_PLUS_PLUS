#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;


vector<double> GetRandomVector()
{
	vector<double> vec;
	default_random_engine dre(time(NULL));
	uniform_real_distribution<double> rand(3.25, 335.2);

	for (int i = 0; i < 93; i++) {
		vec.push_back(rand(dre));
	}

	return vec;
}

bool CheckNumber(double b)
{
	return b < 115.2;
}

void printVectorTask20(vector <double> x, int colCount) {

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


void task20()
{
	vector<double> vecx = GetRandomVector();

	printVectorTask20(vecx, 7);

	int maxIndex = -1;


	for (size_t i = 0; i < vecx.size(); i++)
	{
		if (CheckNumber(vecx[i]))
		{
			if (maxIndex == -1)
				maxIndex = i;
			if (vecx[maxIndex] < vecx[i])
			{
				maxIndex = i;
			}
		}
	}

	cout << "Biggest number: " << vecx[maxIndex] << " MaxIndex: " << maxIndex << endl;

}