//1. U datoteci se nalaze podaci o reprezentacijama na svjetskom prvenstvu : oznaka za grupu kojoj pripada,
//broj odigranih utakmica, broj pobjeda, poraza, neriješenog rezultata, gol - razlika i broj bodova.Napisati
//klasu koja predstavlja reprezentaciju.
//Napisati funkciju koja će napuniti vektor reprezentacija podacima iz datoteke, te drugu koja će sortirati
//sveukupni poredak reprezentacija s obzirom na trenutni rezultat.#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<fstream>
#include<cctype>
#include<cmath>
#include<cstring>

using namespace std;

class Reprezentacija {
public:
    string naziv;
    char oznakaGrupe;
    int brojOdigranihUtakmica;
    int brojPobjeda;
    int	brojPoraza;
    int nerijesenogRezultata;
    int brojBodova;
    int golRazlika;
};

void paroviOsmineFinala(vector<Reprezentacija> reprezentacijecopy) {
 
    for (size_t i = 0; i < reprezentacijecopy.size(); i += 2) {
        cout << reprezentacijecopy[i].naziv << " vs ";
        cout << reprezentacijecopy[i + 1].naziv << endl;
    }
}

vector<Reprezentacija> ucitajReprezentacije() {
    vector<Reprezentacija> reprezentacije;
    string reprez;
    char grupa;
    int utakmice;
    int pobjede;
    int	porazi;
    int nerijeseno;
    int bodovi;
    int golRaz;

    ifstream file("reprezentacijeA1.txt");

    while (file >> reprez >> grupa >> utakmice >> pobjede >> porazi >> nerijeseno >> bodovi >> golRaz) {
        Reprezentacija tmp;
        tmp.naziv = reprez;
        tmp.oznakaGrupe = grupa;
        tmp.brojOdigranihUtakmica = utakmice;
        tmp.brojPobjeda = pobjede;
        tmp.brojPoraza = porazi;
        tmp.nerijesenogRezultata = nerijeseno;
        tmp.brojBodova = bodovi;
        tmp.golRazlika = golRaz;
        reprezentacije.push_back(tmp);
    }
    return reprezentacije;
}


int main() {

    vector<Reprezentacija> reprezentacije = ucitajReprezentacije();

    cout << "Sve reprezentacije: " << endl;
    for (int i = 0; i<reprezentacije.size(); i++) {
        cout << reprezentacije[i].naziv;
        cout << " ";
        cout << reprezentacije[i].oznakaGrupe;
        cout << " ";
        cout << reprezentacije[i].brojOdigranihUtakmica;
        cout << " ";
        cout << reprezentacije[i].brojPobjeda;
        cout << " ";
        cout << reprezentacije[i].brojPoraza;
        cout << " ";
        cout << reprezentacije[i].nerijesenogRezultata;
        cout << " ";
        cout << reprezentacije[i].brojBodova;
        cout << " ";
        cout << reprezentacije[i].golRazlika;
        cout << endl;
    }
    
    cout << endl << "Parovi u osmini finala su: " << endl;
    paroviOsmineFinala(reprezentacije);

    return 0;
}