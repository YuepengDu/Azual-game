#ifndef COSC_ASSIGN_GAME
#define COSC_ASSIGN_GAME
#include "Player.h"
#include "Mosaic.h"
#include "Factory.h"
#include <iostream>
#include <string>
#include <fstream>


class Game {
public:
	void processFactory_Mosaic(Player* player, string factory[6][6], string mosaic[6][6], int factory_line, char title_code, int storage_row);
	void processFactory_Mosaic2(Player* player, string factory[6][6], string mosaic[6][6], int factory_line, char title_code, int storage_row);
	void checkSquare(Player* player, string lineSquare, int position, char color, string mosaic_square[6][6], int &score, int lineS);
	void processRectagle_Square(Player* player, string mosaic[6][6], string mosaic_square[6][6], int &score);
	void readRound(Player* player, string factory_load[6][6], string mosaic[6][6], string mosaic2[6][6], string mosaic_square[6][6], string mosaic_square2[6][6], int round, int scoreForPlayer1, int scoreForPlayer2);
	
	// save and load game
	void save(string nameFile, Player* player);

	// load game
	void load(Player* player, string factory[6], string turn[100]);

	// Check the input turn
	bool check_input_turn(int factory_line, char title_code, int storage_row);

	// Check the empty line in Factories
	bool check_empty_line_F(int factory_line);
	bool check_empty_line_F_Load(string factory[6][6], int factory_line);

	// Check same color Mosaic line
	bool check_same_color(char title_code, int storage_row, string m[6][6]);

	// Check the same color -> same round to square mosaic
	bool check_square_mosaic(int factory_line, char title_code, int storage_row, string mosaic_square[6][6]);

	// Check line 0
	bool check_line_0(int factory_line, char title_code);
	bool check_line_0_Load(int factory_line, char title_code, string factory[6][6]);

	// Check cmd
	bool Check_cmd(string &cmd);

	// Calculate score from Broken Line
	void Cal_score_BL(Player* player, int &score1, int &score2);

	// Calculate score from square mosaic
	void Cal_score(int &score, string mosaic_square[6][6], int position, int lineS);
	
	// Check chosen color in factory
	bool check_color_in_factory(int factory_line, char title_code);
	bool check_color_in_factory_Load(string factory[6][6], int factory_line, char title_code);

	void getFactories(Factory *f);
	void getMosaics(Mosaic *m);
private:
	Factory *factories;
	Mosaic *mosaics;

	string fileName;
};

#endif