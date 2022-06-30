#pragma once
class Hub; //FORWARD DECLARATION (FRIEND CONCEPT)
class Insertion //CLASS DECLARATION Iqhwan
{
private:
	// VARIABLE DECLARATION Iqhwan
	struct TempIN
	{
		char Temp3[20];
		char Temp4[20];
		char Temp5[20];
	};
	TempIN tempch[10]; //STRUCT OBJECT
	char MORE;
	int i;
	int count;
	int cari;
public:
	Insertion();//CONSTRUCTOR
	~Insertion();//DESTRUCTOR
	int setcount(int z);//MUTATOR
	void printoutput(Hub);//PRINT OUTPUT
	int sorting(Hub);//SORTING BY USING INSERTION METHOD
};
