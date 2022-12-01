#pragma once
#include <iostream>
#include <vector>
using namespace std;


class Client
{
public:
	int klientoID;
	string vardas;
	string pavarde;


	
	Client(int klientoID, string vardas, string pavarde);

	void getInfo();
};