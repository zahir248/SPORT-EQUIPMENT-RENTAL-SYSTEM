#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include "Hub.h"
#include "Insertion.h"
using namespace std;

Insertion::Insertion()//CONSTRUCTOR
{
	count = 0;
}
Insertion::~Insertion()//DESTRUCTOR
{
}
int Insertion::setcount(int z)//MUTATOR
{
	count = z;
	return z;
}
void Insertion::printoutput(Hub h) //PRINT OUTPUT Zahir
{
	cout << "RENTAL REPORT : \n";
	cout << "EQUIPMENT CODE" << setw(25) << "EQUIPMENT NAME" << setw(25) << "RENTEENO"<< setw(30)<<"DATE RENTED"<< setw(30)<<"DATE RETURNED\n";
		for (i = 0; i < h.count; i++)
		{
			cout << "E" << h.on[i].cequip << setw(30);
			cout << h.on[i].nameequip << setw(25);
			cout << "M" << h.on[i].MemberNO << setw(30);
			cout << h.on[i].date << setw(30);
			cout << h.on[i].dater << setw(30);
			cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------\n";
		}
}
int Insertion::sorting(Hub h) //INSERTION METHOD Zahir
{
	for (int i = 1; i < h.count; i++) {
		int temp = h.on[i].cequip;
		strcpy_s(tempch[1].Temp3, h.on[i].nameequip);
		int temp3 = h.on[i].MemberNO;
		strcpy_s(tempch[1].Temp4, h.on[i].date);
		strcpy_s(tempch[1].Temp5, h.on[i].dater);
		int j = i - 1;
		//CHANGE POSITION
		while (j >= 0 && h.on[j].cequip > temp) {
			h.on[j + 1].cequip = h.on[j].cequip;
			strcpy_s(h.on[j + 1].nameequip, h.on[j].nameequip);
			h.on[j + 1].MemberNO = h.on[j].MemberNO;
			strcpy_s(h.on[j + 1].date, h.on[j].date);
			strcpy_s(h.on[j + 1].dater, h.on[j].dater);
			j--;
		}
		h.on[j + 1].cequip = temp;
		strcpy_s(h.on[j + 1].nameequip, tempch[1].Temp3);
		h.on[j + 1].MemberNO = temp3;
		strcpy_s(h.on[j + 1].date, tempch[1].Temp4);
		strcpy_s(h.on[j + 1].dater, tempch[1].Temp5);
	}
	cout << "RESULT AFTER SORTING : " << endl;
	cout << "EQUIPMENT CODE" << setw(25) << "EQUIPMENT NAME" << setw(25) << "RENTEENO"<< setw(30)<<"DATE RENTED"<< setw(30)<<"DATE RETURNED\n";
		for (int m = 0; m < h.count; m++)//BRING OUT THE OUTPUT
		{
			cout << "E" << h.on[m].cequip << setw(30);
			cout << h.on[m].nameequip << setw(25);
			cout << "M" << h.on[m].MemberNO << setw(30);
			cout << h.on[m].date << setw(30);
			cout << h.on[m].dater << setw(30);
			cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------\n";
		}
		return 0;
}