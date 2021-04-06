
//main.cpp
#include <iostream>
#include "Progression.h"
using namespace std;

Progression makeProgression(const float& first, const double& second)
{
	Progression obj;
	if (!obj.Init(first, second))
		cout << "Wrong arguments to Init(second)!" << endl;
	return obj;
}


int main()
{
	unsigned int j;
	Progression pgr;
	pgr.Read();
	pgr.Display();

	cout << "Input j = "; cin >> j;
	cout << "elementJ(j) = " << pgr.elementJ(j) << endl << endl;

	double tfirst, tsecond;
	cout << "Input progression values:" << endl;
	cout << " b(0) = "; cin >> tfirst;
	cout << " q    = "; cin >> tsecond;
	pgr = makeProgression(tfirst, tsecond);
	pgr.Display();
	cout << "Input j = "; cin >> j;
	cout << "elementJ(j) = " << pgr.elementJ(j) << endl << endl;
}
