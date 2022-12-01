#include <iostream>
#include <vector>

#include "Klientas.h"
#include "Darbuotojas.h"
#include "Uzsakymas.h"
using namespace std;


int main()
{
	int uzsakymoId = 0;
	int klientoID = 0;
	vector<Client> klientai;
	vector<Uzsakymas> uzsakymai;
	
	
	
	
	Darbuotojas darbuotojas1(1, "Jonas", "Jonaitis", "Pardavejas");
	Darbuotojas darbuotojas2(2, "Petras", "Petraitis", "Pardavejas");
	
	
	cout << "Pasirinkite darbuotoja: " << endl;
	cout << "1. " << darbuotojas1.vardas << " " << darbuotojas1.pavarde << endl;
	cout << "2. " << darbuotojas2.vardas << " " << darbuotojas2.pavarde << endl;
	int darbuotojas;
	cin >> darbuotojas;
	cout << "Sukurti nauja klienta" << endl;
	cout << "Iveskite kliento varda: " << endl;
	string vardas;
	cin >> vardas;
	cout << "Iveskite kliento pavarde: " << endl;
	string pavarde;
	cin >> pavarde;
	Client client(klientoID, vardas, pavarde);
	klientai.push_back(client);
	klientoID += 1;
	
	cout << "Sukurti nauja uzsakyma" << endl;
	cout << "Iveskite tiksla: " << endl;
	string tikslas;
	cin >> tikslas;
	cout << "Iveskite kaina: " << endl;
	int kaina;
	cin >> kaina;
	Uzsakymas uzsakymas(uzsakymoId, klientoID, darbuotojas, tikslas, kaina);

	uzsakymai.push_back(uzsakymas);
	uzsakymoId += 1;
	
	cout << "Uzsakymo informacija: " << endl;
	uzsakymas.getInfo();
}

