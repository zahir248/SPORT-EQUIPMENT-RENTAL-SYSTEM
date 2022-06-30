#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include "Hub.h"
using namespace std;

Hub::Hub() //CONSTRUCTOR Salah
{
	count = 0;
}
Hub::~Hub()//DESTRUCTOR Salah
{
}
int Hub::setcount(int z)//MUTATOR Salah
{
	count = z;
	return z;
}
void Hub::rentfunction()//INPUT DATA Salah
{
	do {
		cout << "PLEASE ENTER EQUIPMENT DETAILS : \n";
		cout << "EQUIPMENT CODE \t: ";
		cin >> on[count].cequip;
		while (!cin.good())
		{
			cout << "WRONG INPUT.PLEASE ENTER ONLY NUMBERS. \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "EQUIPMENT CODE \t: ";
			cin >> on[count].cequip;
		}
		cout << "EQUIPMENT NAME \t: ";
		cin.ignore();
		cin.getline(on[count].nameequip, 20);
		cout << "RENTEE NO \t: ";
		cin >> on[count].MemberNO;
		while (!cin.good())
		{
			cout << "WRONG INPUT.PLEASE ENTER ONLY NUMBERS. \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "RENTEE NO : ";
			cin >> on[count].MemberNO;
		}
		cout << "DATE RENTED \t: ";
		cin.ignore();
		cin.getline(on[count].date, 20);
		cout << "DATE RETURNED \t: ";
		cin.getline(on[count].dater, 20);
		count++; //COUNTING DATA INPUT
		cout << "\n\n--------------------------\n";
		cout << "MORE(Y/N) \t: ";
		cin >> MORE;
		cout << "--------------------------\n\n";
	} while (MORE == 'Y');
}
void Hub::printoutput() //PRINT OUTPUT Salah
{
	cout << "RENTAL REPORT : \n";
	cout << "EQUIPMENT CODE" << setw(25) << "EQUIPMENT NAME" << setw(25) << "RENTEENO"<< setw(30)<<"DATE RENTED"<< setw(30)<<"DATE RETURNED\n";
		for (i = 0; i < count; i++)
		{
			cout << "E" << on[i].cequip << setw(30);
			cout << on[i].nameequip << setw(25);
			cout << "M" << on[i].MemberNO << setw(30);
			cout << on[i].date << setw(30);
			cout << on[i].dater << setw(30);
			cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------\n";
		}
}
//SORTING ASC Lee
void Hub::sortingbinary()
{
	for (i = 0; i < count; i++)
	{
		int min = i;
		for (int j = i + 1; j < count; j++)
		{
			if (on[j].MemberNO < on[min].MemberNO)
			{
				min = j;
			}
		}

		changeposition(i, min);
	}
}
//CHANGE POSITION Lee
void Hub::changeposition(int i, int min)
{
	int tempbin, tempbin2;
	char tempbin3[20], tempbin4[20], tempbin5[20];

	tempbin = on[i].MemberNO;
	on[i].MemberNO = on[min].MemberNO;
	on[min].MemberNO = tempbin;

	tempbin2 = on[i].cequip;
	on[i].cequip = on[min].cequip;
	on[min].cequip = tempbin2;
	strcpy_s(tempbin3, on[i].nameequip);
	strcpy_s(on[i].nameequip, on[min].nameequip);
	strcpy_s(on[min].nameequip, tempbin3);

	strcpy_s(tempbin4, on[i].date);
	strcpy_s(on[i].date, on[min].date);
	strcpy_s(on[min].date, tempbin4);
	strcpy_s(tempbin5, on[i].dater);
	strcpy_s(on[i].dater, on[min].dater);
	strcpy_s(on[min].dater, tempbin5);
}
//BINARY SEARCHING AFTER SORTING DATA Lee
void Hub::binarysearch()
{
	//searching
	cout << "\nPLEASE INPUT MEMBER/RENTEE NO : ";
	cin >> cari;
	int awal, akhir, tengah, b_flag = 0;
	awal = 0;
	akhir = count;
	while (b_flag == 0 && awal <= akhir)
	{
		tengah = (awal + akhir) / 2;
		if (on[tengah].MemberNO == cari)
		{
			b_flag = 1;
			break;
		}
		else if (on[tengah].MemberNO < cari)
			awal = tengah + 1;
		else
			akhir = tengah - 1;
	}
	if (b_flag == 1)
	{
		cout << "\nDATA HAS BEEN FOUND AT INDEX-" << tengah << endl;
		opsi(tengah);
	}


	else
		cout << "\nUNFORTUNATELY, THE DATA ISN'T FOUND IN THE SYSTEM.'\n";





}
//BINARY SEARCHING Lee
void Hub::opsi(int tengah) // USE MID VALUE AS THE INDEX TO RETURN AND UPDATE EQUIPMENT
{
	int opsi2;
	cout << "\nMENU OPTION : ";
	cout << "\n1. RETURN EQUIPMENT ";
	cout << "\n2. EXTEND RETURN DATE ";
	cout << "\n3. CANCEL ";
	cout << "\nOPTION : ";
	cin >> opsi2;
	if (opsi2 == 1) //UPDATE PROCESS OR DELETE DATA
	{
		for (int i = tengah; i < count; i++)
		{
			on[i].MemberNO = on[i + 1].MemberNO;
			strcpy_s(on[i].nameequip, on[i + 1].nameequip);
			on[i].cequip = on[i + 1].cequip;
			strcpy_s(on[i].date, on[i + 1].date);
			strcpy_s(on[i].dater, on[i + 1].dater);
		}
		count--;
		cout << "\n..........SUCESSFULLY DELETED.........\n";
	}
	else if (opsi2 == 2) //UPDATE PROCESS
	{
		cout << "\nOLD DATE : " << on[tengah].dater;
		cout << "\nNEW DATE : ";
		cin >> on[tengah].dater;
		cout << "\n..........SUCESSFULLY UPDATED.........\n";
	}
	else if (opsi2 >= 4) //ERROR STATEMENT
	{
		cout << "\n\nERROR NUMBER\n";
	}
}