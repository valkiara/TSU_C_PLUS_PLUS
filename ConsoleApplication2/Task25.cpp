#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

//bileti 1

struct square {
	double area;
	double perimeter;
};

square Square(double sideX)
{
	square mySquare;
	mySquare.area = sideX * sideX;
	mySquare.perimeter = sideX * 4;

	return mySquare;
}


void task25()
{
	
}