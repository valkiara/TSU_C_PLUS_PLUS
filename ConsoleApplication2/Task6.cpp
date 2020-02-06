#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

void task6()
{
	vector<int> vec;
	default_random_engine dre(time(NULL));
	uniform_int_distribution<int> rand(-17, 44);

	for (int i = 0; i < 200; i++) {
		vec.push_back(rand(dre));
	}

	cout << "Time in minutes " << time(NULL) / 60 << endl;

	
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] >= 0) {
			cout << "Element is Possitive " << &vec[i] << "\t" <<
				sizeof(vec[i]) << "\t" << sqrt(vec[i]) << endl;
		}
		if (vec[i] < 0) {
			cout << "Element is Negative " << &vec[i] << "\t" <<
				sizeof(vec[i]) << "\t" << abs(vec[i]) << endl;
		}
	}
}