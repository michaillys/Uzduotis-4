#include "Klientas.h"
#include <iostream>
using namespace std;






Client::Client(int x, string y, string z)
{
	klientoID = x;
	vardas = y;
	pavarde = z;
}

void Client::getInfo()
{
	cout << "Kliento id: " << klientoID << endl;
	cout << "Vardas: " << vardas << endl;
	cout << "Pavarde: " << pavarde << endl;
}


