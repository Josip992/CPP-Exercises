//#include<string>
//#include<algorithm>
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//
//
//int main(){
//
//	vector<int> vec = {1,2,3,4,5,6,7,7,8,9,10};
//	int n;
//	vector<int>::iterator it;
//
//	cout << "Unesite n:\n";
//	cin >> n;
//
//
//	cout << "pocetni vektor:";
//	for (it = vec.begin(); it != vec.end(); ++it) {
//			std::cout << *it << " ";
//	}
//	}
//
//	cout << "\n";
//
//	cout << "brojevi VECI od n su:";
//	for (it = vec.begin(); it != vec.end(); ++it){
//		if (*it > n) {
//			std::cout << *it << " ";
//		}
//	}
//
//	cout << "\n";
//
//	cout << "brojevi razliciti od n su:";
//	for (it = vec.begin(); it != vec.end(); ++it) {
//		if (*it != n) {
//			std::cout << *it << " ";
//		}
//	}
//
//	cout << "\n";
//
//	for (it = vec.begin(); it != vec.end(); ++it) {
//		*it *= n;
//	}
//
//	cout << "pomnozeni s n brojevi vektora su:";
//	for (it = vec.begin(); it != vec.end(); ++it) {
//		std::cout << *it << " ";
//	}
//
//	return 0;
//}