//# 1. Igra se loto 6 / 45.
//#  Korisnk unosi sam 6 brojeva.
//# Izvlači se 6 nasumicnih brojeva.(nema ponavljanja)
//#  Onda se provjerava koliko je pogodenih.
//# Ako je pogodeno manje od tri ili svih 6 igra staje.
//#  Ukoliko je pogodeno 3 4 ili 5, korisnik opet upisuje brojeve i izvlace se nasumicno novi.
//#  Ponavljanja izvlacenja može bit maximalno 100


#include<iostream>
#include<vector>
using namespace std;


int main() {
	
	vector<int> SestLotoBrojeva(6);
	vector<int> JedinsveniRandomBrojevi;
	int unos;
	int nasumBroj;

	for (int i = 0;i<6;i++) {
		cout << "Unesite loto broj:" << endl;
		cin >> unos;
		SestLotoBrojeva[i].push_back(unos);
	}
	
	while (JedinsveniRandomBrojevi.size() <= 6) {
		
		nasumBroj = rand() % 45 + 1;

		for (int j = 0; j < 6; j++) {
			if (nasumBroj == JedinsveniRandomBrojevi[j]) {
				flag = true;
			}
			JedinsveniRandomBrojevi.push_back(nasumBroj);
		}
	}
	for (int k = 0;k<JedinsveniRandomBrojevi.size()-1;k++) {
		cout << JedinsveniRandomBrojevi[k] << endl;
	}
	return 0;
}