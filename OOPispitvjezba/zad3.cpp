#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

//2. Koristeći STL funkcije copy i transform, napisati funkciju koja čita tekst iz da -
//toteke i sprema u vektor stringova te napisati funkciju koja ispisuje stringove iz
//vektora stringova na konzolu tako da početno slovo svakog reda pretvori u veliko
//slovo.

void citaj_iz_datoteke(string& filename, vector<string>& vec) {
	
	ifstream file(filename);
	string line;
	while (getline(file,line)) {
		vec.push_back(line);
	}

}

void ispisi_string(vector<string>& vec) {
	string line;
	for (auto i : vec) {
		line = i;
		line[0] = toupper(line[0]);
		cout << line;

	}
}

int main() {

	vector<string> vec;

	citaj_iz_datoteke("text.txt", vec);
	

	return 0;
}