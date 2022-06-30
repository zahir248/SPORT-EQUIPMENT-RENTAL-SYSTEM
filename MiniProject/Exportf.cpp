#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include "Hub.h"
#include "Exportf.h"
using namespace std;

Exportf::Exportf()//CONSTRUCTOR Salah
{
	count = 0;
}
Exportf::~Exportf()//DESTRUCTOR Salah
{
}
int Exportf::setcount(int z)//MUTATOR Salah
{
	count = z;
	return z;
}
void Exportf::exportreport(Hub h) //EXPORT REPORT FUNCTION Salah
{
	ofstream outputFile("RentReport.txt", ios::out);
	if (!outputFile)
	{
		cerr << " FILE COULD NOT BE OPENED ";
		exit(1);
	}
	for (int z = 0; z < h.count; z++) //PRINT DATA INTO FILE
	{
		outputFile << "E" << h.on[z].cequip << " ";
		outputFile << h.on[z].nameequip << " ";
		outputFile << "M" << h.on[z].MemberNO << " ";
		outputFile << h.on[z].date << " ";
		outputFile << h.on[z].dater << "\n";
	}
	cout << "\nTXT FILE EXPORT SUCCESSFUL.\n";
}