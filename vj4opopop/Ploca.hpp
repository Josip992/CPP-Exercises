#pragma once
#include "tocka.hpp"
#include <stdlib.h>
#include <iostream>
#include<vector>

using namespace std;
class Board {

public:
	vector<vector<char>> vec;
	Board();
	Board(int r, int s);
	//Board_copy(Board& board2);
	//Board_move(Board& board2);
	void ispunjavanje(vector<vector<char>>& vec, int r, int s);
	void ispis(vector<vector<char>> vec, int r, int s);
	~Board();
	void drawline(Point p1, Point p2, char znak);
	void draw_up_line(Point p1, char znak, vector<vector<char>>& vec);
	void draw_char(Point p1, char znak, vector<vector<char>>& vec);

};