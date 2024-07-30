/*2. Napisati template klasu koja predstavlja container za trojke podataka.Klasa mora omogućiti dodavanje
trojki, brisanje trojki, računanje broja trojki u containeru i sortiranje trojki po željenom elementu trojki.*/
//
//
//#include<iostream>
//#include<vector>
//#include<tuple>
//
//using namespace std;
//
//
//template <typename T1, typename T2, typename T3>
//class Container {
//public:
//	
//	vector<tuple <T1, T2, T3>> trojka;
//
//	void sortiranjePoIndeksu() {
//	
//	}
//
//	void kvantiteta() { 
//	
//	}
//
//	void brisanje() {
//		
//	}
//	
//	void dodaj(T1 el1,T2 el2,T3 el3) {
//		get<0>(trojka) = el1;
//		get<1>(trojka) = el2;
//		get<2>(trojka) = el3;
//	}
//};
//
//int main() {
//
//	Container<int,int,int> c1;
//
//	c1.dodaj(2,4,6);
//
//	cout << get<0>(c1.trojka);
//
//
//
//
//	return 0;
//}