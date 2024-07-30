//#include<vector>
//#include<string>
//#include<algorithm>
//#include<fstream>
//#include<stdexcept>
//#include<iostream>
//
//using namespace std;
//
//int gcd(int a, int b) {
//	while (b != 0) {
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//	return a;
//}
//
//class X {
//public:
//	string err;
//	X(const char* s) : err(s) {}
//};
//
//class Fraction {
//private:
//	int nazivnik;
//	int brojnik;
//public:
//	friend Fraction operator*(const Fraction& prvi, const Fraction& drugi);
//	friend ostream& operator << (ostream& cout, const Fraction& a);
//	friend istream& operator >> (istream& cin, Fraction& a);
//
//
//	Fraction operator*=(const Fraction& drugi) {
//		this->brojnik *= drugi.brojnik;
//		this->nazivnik *= drugi.nazivnik;
//		return *this;
//	}
//
//	void setNazivnik(int Naz){
//		nazivnik = Naz;
//	}
//	void setBrojnik(int Broj) {
//		brojnik = Broj;
//	}
//	int getNazivnik() {
//		return nazivnik;
//	}
//	int getBrojnik() {
//		return brojnik;
//	}
//};
//
//Fraction operator*(const Fraction& prvi, const Fraction& drugi) {
//		Fraction rezultat;
//		rezultat.brojnik = prvi.brojnik * drugi.brojnik;
//		rezultat.nazivnik = prvi.nazivnik * drugi.nazivnik;
//		return rezultat;
//}
//
//ostream& operator << (ostream& cout, const Fraction& a) {
//	cout << a.brojnik << "/";
//	cout << a.nazivnik << endl;
//	return cout;
//}
//
//istream& operator >> (istream& cin, Fraction& a) {
//	cout << "Upisite brojnik: " << endl;
//	cin >> a.brojnik;
//	cout << "Upisite nazivnik: " << endl;
//	cin >> a.nazivnik;
//	return cin;
//}
//
//int main() {
//
//	//Fraction razlomak1;
//	//Fraction razlomak2;
//	Fraction rezultat;
//	int rezNaz = 1;
//	int rezBroj = 1;
//	string linija;
//	int i = 0;
//	vector<Fraction*> razlomci;
//	char delim = '/';
//	int delim_pos;
//	int brojnik;
//	int nazivnik;
//	string brojnikStr;
//	string nazivnikStr;
//
//	try {
//	ifstream file("razlomcizd1.txt");
//	if (!file) {
//		throw X("Datoteka ne postoji!");
//	}
//
//	while(getline(file, linija)){
//		delim_pos=linija.find(delim);
//		if (!delim_pos) {
//			cout << "Razlomci u datoteci su krivo formatirani!";
//		}
//		brojnikStr = linija.substr(0, delim_pos); //odakle dokle ide
//		nazivnikStr = linija.substr(delim_pos+1);
//
//		brojnik = stoi(brojnikStr);
//		nazivnik = stoi(nazivnikStr);
//
//		if (nazivnik==0) {
//			throw X("Nazivnik razlomka ne moze biti nula!");
//		}
//
//		Fraction* razlomak = new Fraction;
//		razlomci.push_back(razlomak);
//
//		razlomci[i]->setBrojnik(brojnik);
//		razlomci[i]->setNazivnik(nazivnik);
//		i += 1;
//	}
//
//
//	cout << "Razlomci u datoteci: " << endl;
//	for (int j = 0; j < razlomci.size(); j++) {
//		cout << *razlomci[j];
//	}
//
//	for (int k = 0; k < razlomci.size(); k++) {
//		rezNaz *= razlomci[k]->getNazivnik();
//		rezBroj *= razlomci[k]->getBrojnik();
//	}
//
//	rezultat.setBrojnik(rezBroj);
//	rezultat.setNazivnik(rezNaz);
//
//	cout << "Bez kracenja razlomka rezultat mnozenja svih razlomaka datoteke iznosi: " << endl;
//	cout << rezultat;
//
//
//	int commonFactor = gcd(rezNaz, rezBroj);
//	while (commonFactor != 1) {
//		rezBroj /= commonFactor;
//		rezNaz /= commonFactor;
//		commonFactor = gcd(rezBroj, rezNaz);
//	}
//
//	rezultat.setBrojnik(rezBroj);
//	rezultat.setNazivnik(rezNaz);
//
//	cout << "Nakon kracenja razlomka i mnozenja svih razlomaka datoteke rezultat iznosi: " << endl;
//	cout << rezultat;
//
//	/*razlomak1.setBrojnik(5);
//	razlomak1.setNazivnik(10);
//
//	razlomak2.setBrojnik(3);
//	razlomak2.setNazivnik(9);*/
//
//	//Fraction razlomak3 = razlomak1 * razlomak2; // * operator
//
//	//cout << razlomak3.getBrojnik() << endl;
//	//cout << razlomak3.getNazivnik() << endl;
//
//	//razlomak3 *= razlomak1; // *= operator
//
//	//cout << razlomak3.getBrojnik() << endl;
//	//cout << razlomak3.getNazivnik() << endl;
//
//	//cout << razlomak1; // ostream operator
//	//cin >> razlomak3; // istream operator
//
//	//cout << razlomak3;
//
//	file.close();
//	
//	return 0;
//	}
//	catch (X x) {
//		cout << "error: " << x.err << endl;
//	}
//}