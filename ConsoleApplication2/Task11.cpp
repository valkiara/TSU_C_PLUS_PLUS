#include <iostream>
#include <fstream>
using namespace std;

void task11()
{
	int num = 123;
	ofstream myfile;
	myfile.open("sample.out");

	if (num / 100 >= 1 && num / 100 < 10)
	{
		myfile << (num % 100 % 10) << (num % 100 / 10) <<  (num / 100) << endl;
	}
	else
	{
		myfile << "ar aris samnishna" << endl;;
	}

	myfile.close();
}