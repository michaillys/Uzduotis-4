#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Uzsakymas
{
public:
	int id;
	int klientoID;
	int darbuotojo_id;
	string tikslas;
	int kaina;
	

	
	Uzsakymas(int id, int klientoID, int darbuotojo_id, string tikslas, int kaina);
	
	void getInfo();
};

