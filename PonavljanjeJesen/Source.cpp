#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstring>
#include <stdexcept>

using namespace std;

class Fraction {
private:
	int brojnik;
	int nazivnik;
public:
	friend istream& operator >>	(istream& cin, Fraction& razlomak);
	friend ostream& operator << (ostream& cout, const Fraction& razlomak);
	Fraction operator* (const Fraction& b);
	Fraction operator*=(const Fraction& other);
	void postaviBr(int brojnik);
	void postaviNz(int nazivnik);
	int vratiBr();//vraca brojnik it klase
	int vratiNz();//vraca nazivnik iz klase
};
istream& operator >>(istream& cin, Fraction& razlomak) {
	cout << "Upisite brojnik: ";
	cin >> razlomak.brojnik;
	cout << "Upisite nazivnik: ";
	cin >> razlomak.nazivnik;
	return cin;
}


ostream& operator <<(ostream& count, const Fraction& razlomak) {
	cout << "Brojnik je: " << razlomak.brojnik << ", a nazivnik je: " << razlomak.nazivnik << "\n";
	return cout;
}

void Fraction::postaviBr(int brojnik) {
	this->brojnik = brojnik;
}
void Fraction::postaviNz(int nazivnik) {
	this->nazivnik = nazivnik;
}
int Fraction::vratiBr() {

	return this->brojnik;
}
int Fraction::vratiNz() {

	return this->nazivnik;
}
Fraction Fraction::operator*(const Fraction& drugi) {
	Fraction rezultat;
	rezultat.brojnik = (this->brojnik * drugi.brojnik); // pristup preko reference zanemaruje private i public i zbog toga pristupamo brojniku i nazivniku samo preko tocke
	rezultat.nazivnik = (this->nazivnik * drugi.nazivnik);
	return rezultat;
}
Fraction Fraction::operator*=(const Fraction& other) {
	this->brojnik *= other.brojnik;
	this->nazivnik *= other.nazivnik;
	return *this; // vraca livu stranu Fraction-a, a pointer treba biti radi reference u nazivu funckije (&Fraction)
}


int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void simplifyFraction(Fraction& razlomak) {
	int common_divisor = gcd(razlomak.vratiBr(), razlomak.vratiNz());
	razlomak.postaviBr(razlomak.vratiBr() / common_divisor);
	razlomak.postaviNz(razlomak.vratiNz() / common_divisor);
}


int main() {
	Fraction trenutni, rezultat;
	rezultat.postaviBr(1);
	rezultat.postaviNz(1);

	try {
		ifstream datoteka("razlomci.txt");
		if (!datoteka) {
			throw runtime_error("File not found");
		}
		string red;
		while (getline(datoteka, red)) {
			trenutni.postaviBr(0);
			trenutni.postaviNz(0);
			int flag = 0, i = 0;
			while (red[i] != '\0') {

				if (red[i] == '/') {
					flag = 1;
					i++;
					continue;
				}
				if (flag == 0) {
					trenutni.postaviBr(trenutni.vratiBr() * 10 + red[i] - 48);
					//broj1 = broj1 * 10 + (slovo - 48); // prije delimitera
				}
				else {
					trenutni.postaviNz(trenutni.vratiNz() * 10 + red[i] - 48);
					if (trenutni.vratiNz() == 0) {
						throw runtime_error("Error! Dividing by zero.");
					}
					//broj2 = broj2 * 10 + (slovo - 48); // nakon delimitera
				}
				i++;
			}
			rezultat *= trenutni;
			cout << trenutni;
		}
		cout << rezultat;
		simplifyFraction(rezultat);
		cout << rezultat;
	}
	catch (const exception& e) {
		cout << "An error occurred: " << e.what() << endl;
	}
	
	return 0;
}