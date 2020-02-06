#include <iostream>
#include <vector>
#include <string>
using namespace std;


void Display(vector <string> x) {

	for (size_t i = 0; i < x.size(); i++)
	{
		if (i > 0 && i % 5 == 0)
		{
			cout << endl;
		}
		cout << x[i] << "\t";
	}

	cout << endl;
}


bool shemowmeba(string x) {
	if (x.length() < 8)
	{
		return true;
	}
	else
	{
		return false;
	}
}


char meoreSimbolo(string x) {
	return x[1];
}

void task18()
{
	vector <string> vector_of_strings{};
	vector <string> small_strings;
	string word;

	cout << "sheitanet stringebi:| "  << endl;

	while (vector_of_strings.size() < 29)
	{
		cin >> word;
		vector_of_strings.push_back(word);
	}

	int count = 0;

	for (size_t i = 0; i < vector_of_strings.size(); i++)
	{
		if (shemowmeba(vector_of_strings[i]))
		{
			small_strings.push_back(vector_of_strings[i]);
		}

		if (meoreSimbolo(vector_of_strings[i]) == 'E')
		{
			count++;
		}
	}
	

	Display(small_strings);
	
	cout << "................................" << endl;

	cout << "Raodenoba: " << count << endl;



}