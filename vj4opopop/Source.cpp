#include "Ploca.hpp"
#include "tocka.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() {
	int retci, stupci;
	cout << "Upisite broj redova: " << endl;
	cin >> retci;
	cout << "Upisite broj stupaca: " << endl;
	cin >> stupci;
	Board board(retci, stupci);

	Point p1, p2, p3;
	while (1) {

		cout << "Upisite x koordinatu: " << endl;
		cin >> p1.x;
		cout << "Upisite y koordinatu: " << endl;
		cin >> p1.y;
		if (p1.x <= 0 || p1.x >= retci || p1.y <= 0 || p1.y >= stupci) { 
			cout << "Upisite koordinate unutar granica obruba: " << endl;
			continue;
		}
		cout << "Upisite drugu x koordinatu: ";
		cin >> p2.x;
		cout << "Upisite drugu y koordinatu: ";
		cin >> p2.y;
		if (p2.x <= 0 || p2.x >= retci || p2.y <= 0 || p2.y >= stupci) {
			cout << "Upisite koordinate unutar granica obruba: " << endl;
			continue;
		}
		board.drawline(p1, p2, 'X');
		board.ispis(board.vec, retci, stupci);

		cout << "Upisite x koordinatu: " << endl;
		cin >> p1.x;
		cout << "unesite y koordinatu: " << endl;
		cin >> p1.y;
		if (p1.x <= 0 || p1.x >= retci || p1.y <= 0 || p1.y >= stupci) {
			cout << "Upisite koordinate unutar granica obruba: " << endl;
			continue;
		}

		board.draw_up_line(p1, 'I', board.vec);
		board.ispis(board.vec, retci, stupci);

		cout << "Upisite trecu x koordinatu: ";
		cin >> p3.x;
		cout << "Upisite trecu y koordinatu: ";
		cin >> p3.y;
		if (p3.x <= 0 || p3.x >= retci || p3.y <= 0 || p3.y >= stupci) {
			cout << "Upisite koordinate unutar granica obruba: " << endl;
			continue;
		}

		board.draw_char(p3, 'M', board.vec);
		board.ispis(board.vec, retci, stupci);
		
		

	}

	return 0;
}