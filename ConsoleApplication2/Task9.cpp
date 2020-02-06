#include <iostream>
#include <vector>
using namespace std;

void task9()
{
	int i, n;
	vector<int> a;


	int count = 0;
	while (count < 20)
	{
		n = rand() % 51;
		a.push_back(n);
		cout << a[count] << ' ';
		count++;
	}

	cout << endl;

	double s = 0.; 
	int raod(0);

	

	count = 0;

	while (count < 20)
	{
		if (a[count] >= 10 && a[count] <= 25)
		{
			s += a[count];
			++raod;
		}
		cout << "napovni sidide = " << s / raod << endl;
		count++;
	}
}