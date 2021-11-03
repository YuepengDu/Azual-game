#include "Mosaic.h"
#include <string>
using namespace std;

Mosaic::Mosaic() {

}

Mosaic::~Mosaic() {

}
void Mosaic::execute(string mosaic[6][6], string mosaic_square[6][6]) {
	string line = "";

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++) {
			line = line + "  ";
		}
		for (int z = 1; z <= i; z++) {
			line = line + ". ";
		}
		mosaic[i][i] = line;
		line = "";
	}

	string line2 = "";
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			line2 = line2 + ". ";
		}
		mosaic_square[i][i] = line2;
		line2 = "";
	}
}
void Mosaic::execute2(string mosaic[6][6]) {
	string line = "";

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++) {
			line = line + "  ";
		}
		for (int z = 1; z <= i; z++) {
			line = line + ". ";
		}
		mosaic[i][i] = line;
		line = "";
	}
}





