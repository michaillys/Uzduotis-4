#include "Uzsakymas.h"
#include <iostream>
using namespace std;

Uzsakymas::Uzsakymas(int Id, int KlientoID, int Darbuotojo_id, string Tikslas, int Kaina)
{
	id = Id;
	klientoID = KlientoID;
	darbuotojo_id = Darbuotojo_id;
	tikslas = Tikslas;
	kaina = Kaina;
}

void Uzsakymas::getInfo()
{
	cout << "Uzsakymo id: " << id << endl;
	cout << "Kliento id: " << klientoID << endl;
	cout << "Darbuotojo id: " << darbuotojo_id << endl;
	cout << "Tikslas: " << tikslas << endl;
	cout << "Kaina: " << kaina << endl;
}
