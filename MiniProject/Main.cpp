#include<iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include "Hub.h"
#include "Insertion.h"
#include "Sentinel.h"
#include "Exportf.h"
using namespace std;

//DECLARATION PART
int opt;
int i;
void menu(); //FUNCTION DECLARATION Lee

int main()
{
	//CLASS AND OBJECT
	Hub in;
	Insertion sort;
	Sentinel sen;
	Exportf ex;
	for (i = 0; i <= 99; i++)
	{
		menu(); // CALL MENU FUNCTION
		cin >> opt;
		while (!cin.good())
		{
			cout << "Wrong input. Please enter only numbers. \n \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			menu();
			cin >> setw(1) >> opt;
		}
		if (opt == 1)
		{
			system("CLS");
			in.rentfunction(); //RENT FUNCTION (INPUT DATA)
			system("CLS");
		}
		else if (opt == 2)
		{
			system("CLS");
			in.printoutput();// CALL OUTPUT
			system("PAUSE");
			system("CLS");
		}
		else if (opt == 3)
		{
			system("CLS");
			sort.sorting(in);// CALL SORTING FUNCTION
			system("PAUSE");
			system("CLS");
		}
		else if (opt == 4)
		{
			system("CLS");
			sen.sequence(in);// CALL SENTINEL SEARCHING FUNCTION
			system("PAUSE");
			system("CLS");
		}

		else if (opt == 5)
		{
			system("CLS");
			in.printoutput();
			in.sortingbinary();// CALL SORTING FOR BINARY SEARCHING
			in.binarysearch();// CALL SEARHING FUNCTION FOR BINARY SEARCHING
			system("PAUSE");
			system("CLS");
		}
		else if (opt == 6)
		{
			system("CLS");
			ex.exportreport(in);// CALL EXPORT DATA FUNCTION
			system("PAUSE");
			system("CLS");
		}
		else if (opt == 7)
		{
			return 0;//CLOSE PROGRAM
		}
		else
		{
			cout << "Wrong input. Please enter only option 1-7. \n"; //ERROR STATEMENT
		}
	}
}
//MENU FUNCTION Lee
void menu() {
	cout << "\t\t\t MAIN MENU\n";
	cout << "-----------------------------------------------------\n";
	cout << "\t 1. INPUT RENT EQUIPMENT\n";
	cout << "\t 2. DISPLAY RENT REPORT\n";
	cout << "\t 3. SORTING EQUIPMENT\n";
	cout << "\t 4. SEARCHING FOR DATA\n";
	cout << "\t 5. RETURN EQUIPMENT OR UPDATE DATE\n";
	cout << "\t 6. EXPORT DATA\n";
	cout << "\t 7. EXIT\n";
	cout << "-----------------------------------------------------\n";
	cout << "MENU OPTION : ";
}