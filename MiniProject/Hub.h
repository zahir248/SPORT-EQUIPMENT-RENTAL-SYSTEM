#pragma once
class Hub //CLASS DECLARATION Zahir
{
	//FRIEND CONCEPT USED
	//ALLOW OTHER CLASS TO BE FRIEND WITH CLASS HUB
	friend class Insertion;
	friend class Sentinel;
	friend class Exportf;
private:
	// VARIABLE DECLARATION
	struct Input
	{
		int cequip;
		char nameequip[20];
		int MemberNO;
		char date[20];
		char dater[20];
	};
	struct TempIN
	{
		char Temp3[20];
		char Temp4[20];
		char Temp5[20];
	};
	Input on[10];
	TempIN tempch[10];
	char MORE;
	int i;
	int count;
	int cari;
public:

	Hub();//CONSTRUCTOR
	~Hub();//DESTRUCTOR
	int setcount(int z);//MUTATOR
	void rentfunction();// INPUT DATA
	void printoutput();//PRINT OUTPUT
	void sortingbinary();//BINARY SEARCH (MUST SORT ASC BEFORE SEARCHING)
	void changeposition(int, int);//SORT PROCESS
	void binarysearch();// BINARY SEARCHING
	void opsi(int tengah);//APPLICATION (BINARY SEARCHING )TO DELETE OR EDIT DATA
};
