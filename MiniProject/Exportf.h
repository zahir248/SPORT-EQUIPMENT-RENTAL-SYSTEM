#include <iostream>
#pragma once

class Hub; //FORWARD DECLARATION (FRIEND CONCEPT)
class Exportf //CLASS DECLARATION Salah
{
private:
	// VARIABLE DECLARATION
	int count;
public:
	Exportf();//CONSTRUCTOR
	~Exportf();//DESTRUCTOR
	int setcount(int z);//MUTATOR
	void exportreport(Hub); //EXPORT REPORT FUNCTION
};
