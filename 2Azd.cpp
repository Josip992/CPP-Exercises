////2. (15) Napišite funkciju koja stringove, koje korisnik unosi, sprema u vektor stingova, svaki string preokrene
////te sortira vektor po preokrenutim stringovima.
//
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<string> preokreni(vector<string>& vekStr) {
//	vector<string> preokrenutVekStr;
//	for (string i:vekStr) {
//		reverse(i.begin(), i.end());
//		preokrenutVekStr.push_back(i);
//	}
//	return preokrenutVekStr;
//}
//
//vector<string> sortiraj(vector<string>& vekStr) {
//	sort(vekStr.begin(), vekStr.end());
//	return vekStr;
//}
//
//int main() {
//
//	vector<string> vekStr;
//	string unos;
//	bool krajUnosa = false;
//	vector<string>preokrenutVekStr;
//	vector<string>sortiraniVekStr;
//
//	while (1) {
//		cout << "Upisite string: ";
//		getline(cin, unos);
//		if (unos == "/") {
//			break;
//			krajUnosa = true;
//		}
//		vekStr.push_back(unos);
//	}
//
//	preokrenutVekStr = preokreni(vekStr);
//
//	cout << endl << "Preokrenuti vektor stringova izgleda ovako: ";
//	for (int i = 0;i< preokrenutVekStr.size();i++) {
//		cout << preokrenutVekStr[i] << " ";
//	}
//
//	sortiraniVekStr = sortiraj(preokrenutVekStr);
//
//
//	cout << endl << "Sortirani vektor stringova izgleda ovako: ";
//	for (int i = 0; i < sortiraniVekStr.size(); i++) {
//		cout << sortiraniVekStr[i] << " ";
//	}
//	
//	return 0;
//}