#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

//bileti 1


class City
{
//velebi
public: string cityName;
public: double population; //atasi adamiani
public: double area;  //kvadratuli km
public: double seaLevel; //metri

//uparametro konstruqtori
public:City()
{

}

//paarametria konstruqtori
public:City(string cityName, double population, double area, double seaLevel)
{
	this->cityName = cityName;
	this->population = population;
	this->area = area;
	this->seaLevel = seaLevel;
}


public: void Print()
{
	cout << "City Name:\t" << cityName << endl;
	cout << "Population:\t" << population << " atasi adamiani"<< endl;
	cout << "Area:\t" << area << " kvadratuli km." << endl;
	cout << "Sea Level:\t" << seaLevel << " metri" << endl;

}


};




void task26()
{
	City khashuri("Kashuri", 50000, 1000, 500);
	khashuri.Print();


	cout << endl;

	City surami;
	surami.area = 20000;
	surami.cityName = "Surami";
	surami.population = 30000;
	surami.seaLevel = 600;

	surami.Print();
}

