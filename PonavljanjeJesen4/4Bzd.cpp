////4. (10) Napišite program koji iz datoteke uˇcitava nenegativne cijele brojeve.Tada se, koriste´ci standardne
////algoritme, ispišu broj dvoznamenkastih brojeva i prvi od njih ako postoji.
//
//
//#include<fstream>
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//
//	vector<int> vekNegBr;
//	vector<int> dvoznam;
//	int tmp;
//	int suma;
//	string negBrStr;
//	string linija;
//	ifstream file("neneg.txt");
//
//	if (!file) {
//		cout << "Pogreska pri otvaranju datoteke!";
//		return 1;
//	}
//
//	while (getline(file,linija)) {
//		cout << linija << endl;
//		tmp = stoi(linija);
//		if (tmp >= 1) {
//			vekNegBr.push_back(tmp);
//		}
//	}
//	for (int i: vekNegBr) {
//		negBrStr = to_string(i);
//		if (negBrStr.length() >= 2) {
//			tmp = stoi(negBrStr);
//			dvoznam.push_back(tmp);
//		}
//	}
//
//
//	if (dvoznam.size() >= 1) {
//		cout << endl << "Dvoznamenkasti elementi: " << endl;
//		for (int i : dvoznam) {
//			cout << i << endl;
//		}
//	}
//	
//
//	
//	if (dvoznam.size() >= 1) {
//		cout << endl << "Prvi dvoznamenkasti element: ";
//		cout << endl << dvoznam[0];
//	}
//	
//
//	return 0;
//}