////
////2. Napisati template klasu za skup.U klasi treba biti omogućeno dodavanje elemenata u skup, brisanje svih
////elemenata skupa, presjek i unija s drugim skupom.
//
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include <set>
//
//using namespace std;
//
//template<typename T>
//class Skup {
//public:
//	vector<T> elementi;
//
//	void dodaj(T el) {
//		elementi.push_back(el);
//		cout << el << " dodan u skup" << endl;
//	}
//	void izbrisiSve() {
//		for (T elem:elementi) {
//			elementi.clear();
//		}
//	}
//	void print() {
//		cout << "Elementi skupa su: " << endl;
//		for (T elem : elementi) {
//			cout << elem;
//			cout << endl;
//		}
//	}
//	void presjek(vector<T> skup1, vector<T> skup2) {
//		vector<T> rezultat;
//		sort(skup1.begin(), skup1.end());
//		sort(skup1.begin(), skup1.end());
//
//		set_intersection(skup1.begin(), skup1.end(),
//			skup2.begin(), skup2.end(),
//			back_inserter(rezultat));
//
//		cout << "Elementi skupa su: " << endl;
//		for (T elem : rezultat) {
//			cout << elem;
//			cout << endl;
//		}
//	}
//	void presjek(vector<T> skup2) {
//		vector<T> rezultat;
//		sort(elementi.begin(), elementi.end());
//		sort(skup2.begin(), skup2.end());
//
//		set_intersection(elementi.begin(), elementi.end(),
//			skup2.begin(), skup2.end(),
//			back_inserter(rezultat));
//
//		cout << "Elementi presjeka skupova su: " << endl;
//		for (T elem : rezultat) {
//			cout << elem;
//			cout << endl;
//		}
//	}
//	void unija(vector<T> skup2) {
//	elementi.insert(elementi.end(), skup2.begin(), skup2.end());
//	}
//};
//
//
//int main() {
//
//	Skup<int> sk1;
//	Skup<int> sk2;
//
//	sk1.dodaj(5);
//	sk1.dodaj(13);
//	sk1.dodaj(1);
//	sk1.dodaj(541);
//	sk1.dodaj(-23);
//
//	sk2.dodaj(5);
//	sk2.dodaj(3);
//	sk2.dodaj(1);
//	sk2.dodaj(1);
//	sk2.dodaj(3);
//
//	//sk1.presjek(sk2.elementi);
//	sk1.unija(sk2.elementi);
//
//	sk1.print();
//	return 0;
//}