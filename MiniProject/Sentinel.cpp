#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include "Hub.h"
#include "Sentinel.h"
using namespace std;

Sentinel::Sentinel()//CONSTRUCTOR Iqhwan
{
	count = 0;
}
Sentinel::~Sentinel()//DESTRUCTOR Iqhwan
{
}

int Sentinel::setcount(int z)//MUTATOR Iqhwan
{
	count = z;
	return z;
}

void Sentinel::sequence(Hub h) //SENTINEL SEARCH FOR FINDING DATA Iqhwan
{
	int cari;
	cout << "ENTER THE EQUIPMENT CODE THAT YOU WANT TO SEARCH : ";
	cin >> cari; //INPUT THE TARGET

	while (!cin.good())
	{
		cout << "WRONG INPUT.PLEASE ENTER ONLY NUMBERS. \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "ENTER THE EQUIPMENT CODE THAT YOU WANT TO SEARCH : ";
		cin >> cari;
	}
	//SENTINEL SEARCH METHOD Iqhwan
	bool found = false;

	for (int z = 0; z < h.count; z++)
	{
		if (cari == h.on[z].cequip)
		{
			found = true;

			cout << "EQUIPMENT CODE" << setw(25) << "EQUIPMENT NAME" <<setw(25) << "RENTEE NO" << setw(30) << "DATE RENTED" << setw(30) << "DATE RETURNED\n";
		    cout << "E" << h.on[z].cequip << setw(30);
			cout << h.on[z].nameequip << setw(25);
			cout << "M" << h.on[z].MemberNO << setw(30);
			cout << h.on[z].date << setw(30);
			cout << h.on[z].dater << setw(30);
			cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------\n";
		}
	}
	if (!found)
	{
		cout << " \nNOT FOUND." << endl;
		cout << "\n\n--------------------------\n";
	}
}