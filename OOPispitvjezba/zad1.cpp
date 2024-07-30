#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

/*1. Napisati klasu Text čiji član je vektor stringova. Implementirajte funkcijske čla-
nove za dodavanje stringa na kraj, skidanje stringa sa početka, dohvaćanje vri-
jednosti zadnjeg stringa (ako je vektor prazan vraća prazni string) i ubacivanje
stringa na i-to mjesto.
2. Koristeći STL funkcije copy i transform, napisati funkciju koja čita tekst iz da-
toteke i sprema u vektor stringova te napisati funkciju koja ispisuje stringove iz
vektora stringova na konzolu tako da početno slovo svakog reda pretvori u veliko
slovo.
3. Napisati apstraktnu klasu Quad koja ima četiri privatna člana (stranice četve-
rokuta), metode za postavljanje i dohvaćanje stranica i čistu virtualnu funkciju
Area. Izvesti klasu Rectangle iz klase Quad. Napisati globalnu funkciju calcArea
koja prima parametar tipa Quad i vraća površinu danog četverokuta.
Napisati
main funkciju u kojem se kreira pravokutnik i dodjeljuju mu se vrijednosti za stra-
nice i koristeći funkciju calcArea ispisuje površina pravokutnika.
4. Napisati template funkciju za sortiranje niza, koja osim za jednostavne tipove (int
, float, char, double) treba sortirati i datume. Definirati i implementirati klasu
Date sa potrebnim članovima tako da sortiranje ispravno radi.*/
//--------------------------------------------------------------------------------------------
// 1. Napisati klasu Text čiji član je vektor stringova. Implementirajte funkcijske čla-
//nove za dodavanje stringa na kraj, skidanje stringa sa početka, dohvaćanje vri -
//jednosti zadnjeg stringa(ako je vektor prazan vraća prazni string) i ubacivanje
//stringa na i - to mjesto.
//class Text {
//	vector<string> vec;
//public:
//	void dodavanje_na_kraj(string str1);
//	void skidanje();
//	string dohvati_zadnji();
//	void ubacivanje_stringa(string str1, int i);
//};
//
//void Text::dodavanje_na_kraj(string str1) {
//
//	vec.push_back(str1);
//}
//
//void Text::skidanje() {
//
//	vec.erase(vec.begin());
//}
//
//string Text::dohvati_zadnji() {
//
//	string prazni;
//	unsigned i = 0;
//
//	if (vec.size() == 0) {
//		return prazni;
//	}
//
//	return vec[vec.size() - 1];
//}
//
//void Text::ubacivanje_stringa(string str1, int ind) {
//
//	if (ind > vec.size()) {
//		return;
//	}
//	vec.insert(vec.begin() + ind, str1);
//
//}
//
//int main() {
//
//	Text T;
//	T.dodavanje_na_kraj("Jozo");
//	T.dodavanje_na_kraj("Bozo");
//	T.dodavanje_na_kraj("Hobotnica");
//	T.skidanje();
//	cout << T.dohvati_zadnji() << endl;
//	T.ubacivanje_stringa("kaktus", 2);
//	cout << T.dohvati_zadnji() << endl;
//
//
//	return 0;
//}

