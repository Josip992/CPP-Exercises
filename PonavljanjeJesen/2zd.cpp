
//
//#include<algorithm>
//#include<iostream>
//#include<vector>
//#include<iterator>
//#include<numeric>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
//
//int main() {
//
//	ifstream file("stringovizd2.txt");
//	vector<string> v;
//	string line;
//
//	while (file >> line) {
//		v.push_back(line); 
//	}
//
//	vector<string> d(v.size());
//	copy(v.begin(), v.end(), back_inserter(d));
//
//	cout << "unsorted vector:\n";
//	for (const string i : d) {
//		cout << i << " ";
//	}
//
//	sort(d.begin(), d.end());
//
//	cout << "\nsorted vector:\n";
//	for (const string i : d) {
//		cout << i << " ";
//	}
//
//	file.close();
//
//	return 0;
//}
