#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

//დაწერეთ პროგრამა, რომელიც რამდენიმე მთელ რიცხვის ჩაწერს შესაბამის ვექტორში.შემდეგ დაბეჭდავს ამ რიცხვებს, და თითოეულ ამ რიცხვთან ერთად აგრეთვე დაბეჭდავს მის კუბს, აბსოლუტურ მნიშვნელობას, და ფესვს აბსოლუტური მნიშვნელობიდან.იზრუნეთ, რომ ბეჭდვის ფორმატი იყოს მაქსიმალურად მოხერხებული.

void task1()
{

	vector<int> myVector;
	srand((unsigned)time(NULL));

	int a = rand() % 20 + 1; //1 to 20   

	for (int i = 0; i < a; i++) {
		int b = rand() % 20 + 1;
		myVector.push_back(b);
	}


	for (int i = 0; i < myVector.size(); i++) {

		cout << "Org. Number " << myVector[i] << " kubi " << pow(myVector[i], 3) << " ABS " << abs(myVector[i]) << " fesvi abs " << sqrt(abs(myVector[i])) << endl;
	}
}