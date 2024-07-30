#include <iostream>
using namespace std;


void unosNiza(int* niz, int a) {
	for (int i = 0; i < a; i++) {
		cout << "Unesite brojeve: " << endl;
		cin >> niz[i];
	}
}

void ispisNiza(int* niz, int a) {
	for (int i = 0; i < a; i++) {
		cout << niz[i] << ' ';
	}
}



int izbaciDuplikate(int* niz, int* niz2, int a) {
	int br = 0;
	for (int i = 0; i < a; i++) {
		bool ne_sadrzi = true;
		for (int j = 0; j < i; j++)
			if (niz[i] == niz[j]) {
				ne_sadrzi = false;
				break;
			}

		if (ne_sadrzi) {
			niz2[br] = niz[i];
			br++;
		}

	}
	return br;
}

int main() {
	int brojElemenata;

	cout << "Unesite broj elemenata: " << endl;
	cin >> brojElemenata;

	int* niz = new int[brojElemenata];
	int* niz2 = new int[brojElemenata];


	unosNiza(niz, brojElemenata);
	int br = izbaciDuplikate(niz, niz2, brojElemenata);
	ispisNiza(niz2, br);

	delete[] niz;
	delete[] niz2;

	
	return 0;
}