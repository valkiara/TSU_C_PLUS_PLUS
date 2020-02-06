#include <vector>
#include <random>
#include <ctime>
#include <iostream>
using namespace std;


bool lessThenX(double a)
{
	return a < 64.5;
}

void task17()
{
	vector<double> vec1;

	default_random_engine dre(time(NULL));
	uniform_real_distribution<double> rand(0.1, 100.2);

	for (size_t i = 0; i < 95; i++)
	{
		vec1.push_back(rand(dre));
	}


	int res = count_if(vec1.begin(), vec1.end(), lessThenX);

	int res1 = count_if(vec1.begin(), vec1.end(), [](double i) {return i < 64.5; });


	cout << "Result: " << res;
	cout << "Result1: " << res1;
}

