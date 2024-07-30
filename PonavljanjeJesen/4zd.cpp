//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
//template<typename T>
//bool je_li_simetrican(vector<T> vec) {
//	auto j = vec.size() - 1;
//	for (auto i = 0; i <= (vec.size() / 2) - 1; i++) {
//		if (vec[i] != vec[j]) {
//			return false;
//		}
//		j--;
//	}
//	return true;
//}
//
//int main() {
//
//	vector<int> vecINT = {1,2,3,4,4,3,2,1};
//	vector<string> vecSTR = { "ananas","banana","banana","ananas" };
//	//bool rezultat = je_li_simetrican(vecINT);
//	bool rezultat = je_li_simetrican(vecSTR);
//	cout << boolalpha << rezultat;
//
//	return 0;
//}
//
