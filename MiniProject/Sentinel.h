#pragma once
class Hub;//FORWARD DECLARATION (FRIEND CONCEPT)
class Sentinel//CLASS DECLARATION Lee
{
private:
	// VARIABLE DECLARATION
	int i;
	int count;
	int cari;

public:
	Sentinel();//CONSTRUCTOR
	~Sentinel();//DESTRUCTOR
	int setcount(int z);//MUTATOR
	void sequence(Hub);//SENTINEL SEARCH FOR FINDING DATA
};
