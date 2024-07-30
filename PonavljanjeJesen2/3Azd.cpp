//
///*3. Napisati funkciju koja prima vektor brojeva, te računa korijen i logaritam broja.Funkcija baca iznimku ako
//matematička operacija nije validna(korijen se može izračunati samo za nenegativne brojeve, a logaritam
//	samo za strogo pozitivne brojeve*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class X {
//public:
//	string err;
//	X(const char* s) : err(s) {}
//};
//
//
//void fun(vector<int> skup) {
//	vector<int> logaritmi;
//	vector<int> korijeni;
//	double tmp = 0;
//	double tmp2 = 0;
//	
//	try{
//	for (size_t i = 0; i < skup.size(); i++) {
//		if (skup[i] < 1 && skup[i] > 0) {
//			throw X("Nije moguce izracunati logaritam broja!");
//		}
//		if (skup[i] < 0) {
//			throw X("Nije moguce izracunati korijen broja!");
//		}
//		tmp = log(skup[i]);
//		tmp2 = sqrt(skup[i]);
//		logaritmi.push_back(tmp);
//		korijeni.push_back(tmp2);
//	}
//	}
//	catch (X x) {
//		cout << "error: " << x.err << endl;
//	}
//	for (int i = 0; i < skup.size(); i++) {
//		cout << " Originalni broj: ";
//		cout << skup[i];
//		cout << " Logaritam broja: ";
//		cout << logaritmi[i];
//		cout << " Korijen broja: ";
//		cout << korijeni[i];
//		cout << endl;
//	}
//
//
//}
//
//int main() {
//	
//	vector<int> brojevi;
//
//	brojevi.push_back(1);
//	brojevi.push_back(16);
//	brojevi.push_back(3);
//	brojevi.push_back(9);
//	brojevi.push_back(100);
//
//	fun(brojevi);
//
//	return 0;
//}