#ifndef COSC_ASSIGN_FACTORY
#define COSC_ASSIGN_FACTORY
#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct storeFac {
	string fac[6][6];
};

class Factory {
public:
	Factory();
	~Factory();

	// init the factory with random card
	void execute();

	// print the factory
	void printFac();

	// get factory
	string factory[6][6];

	// store factories
	vector <storeFac> sFac;

	// copy factory
	void pushFac();

	void storingFac(string factory[6][6]);

private:
	
	char colors[5] = { 'R','Y','B','L','U' };
};
#endif