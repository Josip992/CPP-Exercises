//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<fstream>
//#include<cstring>
//using namespace std;
//
//
//class Fraction {
//public:
//	int nazivnik;
//	int brojnik;
//};
//
//
//void puniVektor(vector<Fraction>& vek){
//	int tmp;
//	string line;
//	vector<string> razlomciStr;
//	vector<int> razlomciInt;
//	string brojnikStr;
//	string nazivnikStr;
//	int brojnikInt;
//	int nazivnikInt;
//	size_t delim_pos;
//	Fraction temp;
//
//	ifstream file("razlomcizd1.txt");
//	if (!file) {
//		cout << "error opening file";
//	}
//	while (getline(file, line)) {
//		razlomciStr.push_back(line);
//	}
//	for (string i : razlomciStr) {
//		cout << i << endl;
//	}
//	cout << "pretvaranje iz stringa u int" << endl;
//	for (string i : razlomciStr) {
//		cout << i << endl;
//		delim_pos = i.find("/");
//		brojnikStr = i.substr(0, delim_pos);
//		nazivnikStr = i.substr(delim_pos + 1);
//		brojnikInt = stoi(brojnikStr);
//		nazivnikInt = stoi(nazivnikStr);
//		temp.nazivnik = nazivnikInt;
//		temp.brojnik = brojnikInt;
//		vek.push_back(temp);
//	}
//	cout << "Printanje inta" << endl;
//	for (Fraction i : vek) {
//		cout << i.brojnik << "/";
//		cout << i.nazivnik << endl;
//
//	}
//
//}
//
//int main() {
//
//	vector<Fraction> vektorRazlomaka;
//	puniVektor(vektorRazlomaka);
//
//
//	return 0;
//}