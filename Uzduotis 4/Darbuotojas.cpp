#include "Darbuotojas.h"
#include <iostream>
using namespace std;




Darbuotojas::Darbuotojas(int Id, string Vardas, string Pavarde, string Pareigos)
{
	id = Id;
	vardas = Vardas;
	pavarde = Pavarde;
	pareigos = Pareigos;
}

void Darbuotojas::getInfo()
{
	cout << "Darbuotojo id: " << id << endl;
	cout << "Vardas: " << vardas << endl;
	cout << "Pavarde: " << pavarde << endl;
	cout << "Pareigos: " << pareigos << endl;
}