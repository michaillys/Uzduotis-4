#pragma once
#include <iostream>
using namespace std;

class Darbuotojas
{
public:
	int id;
	string vardas;
	string pavarde;
	string pareigos;

	Darbuotojas(int id, string vardas, string pavarde, string pareigos);

	void getInfo();
	
};

