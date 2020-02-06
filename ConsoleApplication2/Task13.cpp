#include <vector>
#include <random>
#include <ctime>
#include <iostream>

using namespace std;

void task13()
{
	vector<int> vec1;
	vector<int> vec2;

	default_random_engine dre(time(NULL));
	uniform_int_distribution<int> rand(100, 1000);

	for (size_t i = 0; i < 100; i++)
	{
		vec1.push_back(rand(dre));
	}

	int sum = 0;

	for (size_t i = 0; i < vec1.size(); i++)
	{
		int powNom = pow(vec1[i], 4);
		vec2.push_back(powNom);
		sum += powNom;
	}

	double avg = sum / vec2.size();

	cout << "AVG\t" << avg << endl;

	
}