#include "Ploca.hpp"
#include "tocka.hpp"
Board::Board() { //funkcija board u klasi board
	int retci, stupci; //broj stupaca B i br redaka A
	cout << "unesite broj redova: ";
	cin >> retci;
	vec.resize(retci);
	cout << "unesite broj stupaca: ";
	cin >> stupci;

	for (int i = 0; i < retci; i++) {
		vec[i].resize(stupci);
	}
	ispunjavanje(vec, retci, stupci);
	ispis(vec, retci, stupci);

}
Board::Board(int r, int s) { //nije metoda nego konstruktor jer ne vraca nista, metoda ima tip funkcije a konstruktor ima samo ime klase i/ili argumente
	vec.resize(r);
	for (int i = 0; i < r; i++) {
		vec[i].resize(s);
	}
	ispunjavanje(vec, r, s);
	ispis(vec, r, s);
};
//Board::Board_copy(Board& board2) {
//	vec = board2.vec;
//}
//Board::Board_move(Board& board2) {
//	vec = move(board2.vec);
//}
Board::~Board() {
}
void Board::ispunjavanje(vector<vector<char>>& vec, int r, int s) {
	for (int i = 0; i < r; i++) { //prvi i zadnji red 0
		if (i == 0 || i == r - 1) {
			for (int j = 0; j < s; j++) {
				vec[i][j] = '0';
			}
		}
		else { //sve osim prvog i zadnjeg reda
			int k = 1;
			for (k; k < s - 1; k++) {
				vec[i][k] = ' ';
			}
			vec[i][0] = '0';
			vec[i][k] = '0'; //k je van for petlje odnosno zapamtit ce zadnji k koji je zadnjii stupac
		}
	}

}
void Board::ispis(vector<vector<char>> vec, int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << vec[i][j];
		}
		cout << endl;

	}
}
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(double x1, double y1) {
	x = x1, y = y1;
}
void Board::drawline(Point p1, Point p2, char znak) { 
	round(p1.x);
	round(p2.x);
	round(p1.y);
	round(p2.y);
	const bool steep = (fabs(p2.y - p1.y) > fabs(p2.x - p1.x));
	if (steep)
	{
		swap(p1.x, p1.y);
		swap(p2.x, p2.y);
	}

	if (p1.x > p2.x)
	{
		swap(p1.x, p2.x);
		swap(p1.y, p2.y);
	}

	const float dx = p2.x - p1.x;
	const float dy = fabs(p2.y - p1.y);

	float error = dx / 2.0f;
	const int ystep = (p1.y < p2.y) ? 1 : -1;
	int y = (int)p1.y;

	const int maxX = (int)p2.x;

	for (int x = (int)p1.x; x <= maxX; x++)
	{
		if (steep)
		{
			vec[y][x] = znak;
		}
		else
		{
			vec[x][y] = znak;
		}

		error -= dy;
		if (error < 0)
		{
			y += ystep;
			error += dx;
		}
	}
}
void Board::draw_up_line(Point p1, char znak, vector<vector<char>>& vec) {
	round(p1.x);
	round(p1.y);
	int j = p1.x;

	for (int i = 1; i < p1.y; i++) { 
				vec[i][j] = znak;
	}
	

}
void Board::draw_char(Point p3, char znak, vector<vector<char>>& vec) {
	round(p3.x);
	round(p3.y);
	vec[p3.x][p3.y] = znak;


}

