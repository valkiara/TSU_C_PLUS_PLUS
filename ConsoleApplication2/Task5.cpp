#include <iostream>

using namespace std;

void task5()
{
	int x = 7 / 3;

	int n = 7, m;
	while (n > 4)
	{
		switch (n) {
		case 7: m = n / 3 + 2;
		case 8: m = n % 2 + 1; 
			break;
		default: m = n;  
			break;
		}
		cout << "n= " << n << "\t" << "m= " << m << endl;
		n--;
	}

}