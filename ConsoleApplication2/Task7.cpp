#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std; 

void task7()
{
	vector<int> vec;
	vector<double> vec1;

	double average;

	ifstream fin("data.txt");
	ofstream fout("out.txt");

	double number;
	double number2;

	while (fin >> number) {
		vec.push_back(number);
	}

	while (cin >> number2) {
		vec1.push_back(number2);
	}

	int sum = 0;

	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	average = sum / vec.size();

	double max = *max_element(vec1.begin(), vec1.end());
	fin.close();
	
	/*fout << "vec" << average;
	fout << "vec1" << max;*/
	ofstream myfile;
	myfile.open("out.txt");
	myfile << "aaaa";
	myfile.close();
}