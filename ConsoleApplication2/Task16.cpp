#include <vector>
#include <random>
#include <ctime>
#include <iostream>

using namespace std;


bool isEqualTo12(int a)
{
	if (a < 10 || a > 99)
		return false;

	int part1 = a / 10;
	int part2 = a % 10;

	if ((part1 * part2) == 12)
		return true;
	else
		return false;
}

void task16()
{
	vector<int> vec1;

	default_random_engine dre(time(NULL));
	uniform_int_distribution<int> rand(11, 99);

	for (size_t i = 0; i < 101; i++)
	{
		vec1.push_back(rand(dre));
	}


	int res = count_if(vec1.begin(), vec1.end(), isEqualTo12);

	int res1 = count_if(vec1.begin(), vec1.end(), [](int i) {return (i % 10) * (i / 10) == 12; });


	cout << "Result: " << res;
	cout << "Result1: " << res1;
}

