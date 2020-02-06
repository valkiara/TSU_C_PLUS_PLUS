#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>

using namespace std;


vector<double> GetRandomVector()
{
	vector<double> vec;
	default_random_engine dre(time(NULL));
	uniform_int_distribution<dobule> rand(3.25, 335.2);

	for (int i = 0; i < 93; i++) {
		vec.push_back(rand(dre));
	}

	return vec;
}

task20()
{
	vector<double> vecx =  GetRandomVector();
}