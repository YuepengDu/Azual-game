#include "Factory.h"
#include <string>
using namespace std;

Factory::Factory() {
	
}

Factory::~Factory() {

}

void Factory::execute() {
	
	this->factory[0][0] = "F ";

	string line = "";
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (j < 3) {
				line = line + colors[rand() % 5] + " ";
			}
			else line = line + colors[rand() % 5];

		}
		this->factory[i][i] = line;
		line = "";
	}
	
}

void Factory::printFac() {
	std::cout << "Factories:" << std::endl;
	for (int i = 0; i <= 5; i++) {
		std::cout << i << ": " << this->factory[i][i] << endl;
	}
	
}

void Factory::pushFac() {
	storeFac tmpp;
	for (int i = 0; i < 6; i++) {
		tmpp.fac[i][i] = this->factory[i][i];
	}
	this->sFac.push_back(tmpp);
}

void Factory::storingFac(string factory[6][6]) {
	storeFac tmpp;
	for (int i = 0; i < 6; i++) {
		tmpp.fac[i][i] = factory[i][i];
	}
	this->sFac.push_back(tmpp);
}