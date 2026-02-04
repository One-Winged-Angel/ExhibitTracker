#include "Exhibit.h"
#include <string>
#include <iostream>
#include <array>

using namespace std;

int main()
{
	Exhibit* exhibits[3] = { nullptr, nullptr, nullptr };
	exhibits[0] = new Exhibit("Mona Lisa", 2, 89.5);
	exhibits[1] = new Exhibit("Venus dimilo", 3, 120.0);
	exhibits[2] = new Exhibit("The Scream", 1, 95.5);

	for (int i = 0; i < size(exhibits); i++)
	{
		cout << exhibits[i]->getName() << endl;

	}

	for (int i = 0; i < size(exhibits); i++)
	{
		delete exhibits[i];
		exhibits[i] = nullptr;
	}

	return 0;
}