////3. Napuniti vektor integera v vrijednostima unesenim sa tipkovnice.
////• Napisati funkciju display(vector<int>&v) koja ispisuje sadržaj vektora koristeći for_each.
////• Naći sve jedinstvene integere i zapisati ih u vektor vu.
////• Generirati vektor vc iste veličine kao vu.
////• Za svaki element iz vu prebrojati koliko puta se pojavljuje u vektoru v i spremiti rezultat u vu.
////• Koristeći funkciju display ispisati sadržaj vektora vc i vu
//
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<int> prebrojiPojavljivanje(vector<int> v1, vector<int> v2) {
//	vector<int> rezultat;
//
//	for ( int el1 : v1) {
//		int brojac = 0;
//
//		for (int el2 : v2) {
//			if (el1 == el2) {
//				brojac++;
//			}
//		}
//
//		rezultat.push_back(brojac);
//	}
//
//	return rezultat;
//}
//
//
////int brojPonavljanjaFun(vector<int> vec1, vector<int> vec2) { //pronalazenje broja zajednickih elemenata, izkomentirano jer nije trazeo u zadatku
////	int br = 0;
////
////	for (auto x:vec1) {
////		for (auto y:vec2) {
////			if (x==y) {
////				br++;
////			}
////		}
////	}
////
////
////	return br;
////}
//
//vector<int> jedinstveni(vector<int>& v) {
//
//	sort(v.begin(), v.end());
//
//	auto newEnd = unique(v.begin(), v.end()); //newEnd je iterator tj pointer na element NAKON zadnjeg unique elementa npr 123455221. pokzivac je na drugoj petici i brise od tu do kraja
//
//	v.erase(newEnd, v.end());
//
//	return v;
//}
//
//void print(int broj) {
//	cout << broj << " " << endl;
//}
//
//void display(vector<int>& v) {
//	for_each(v.begin(), v.end(), print);
//}
//
//int main() {
//
//	vector<int> v; 
//
//	vector<int> vu;
//
//	string input;
//	int input1;
//	bool slovo = false;
//	bool krajInputa = false;
//
//	vector<int> vc;
//	vc.resize(vu.size());
//
//	vector<int> brojPonavljanja;
//
//	while(1) {
//        cout << "Unesite integer (za prekid upisite '/'): ";
//		cin >> input;
//		if (input == "/") {
//			krajInputa = true;
//			break;
//		}
//		for (char c:input) {
//			if (isalpha(c)) {
//				slovo = true;
//				break;
//			}
//		}
//		if (slovo) {
//			cout << "Unjeli ste slovo, pokrenite program ponovo i unosite samo integere!";
//			break;
//		}
//		input1 = stoi(input);
//		v.push_back(input1); 
//        
//    }
//	cout << "Vektor koji ste unjeli izgleda ovako: " << endl;
//	display(v);
//
//	vu = jedinstveni(v);
//	cout << "Vektor jedinstvenih brojeva vu izgleda ovako: " << endl;
//
//	display(vu);
//
//	brojPonavljanja = prebrojiPojavljivanje(v,vu);
//
//	for (int k = 0;k<brojPonavljanja.size();k++) {
//		cout << "Element: " << v[k] << " u vektoru se pojavljuje " << brojPonavljanja[k] << " puta." << endl;
//	}
//
//	for (int j = 0; j < brojPonavljanja.size(); j++) {
//		int tmp = brojPonavljanja[j];
//		vu.push_back(tmp);
//	}
//
//	display(vu);
//	display(vc);
//
//	return 0;
//}