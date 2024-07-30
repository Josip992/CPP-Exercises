////2. (15) Napišite specijalizaciju template funkcije min iz standardne biblioteke za std::string koja vra´ca
////kra´ci string.
//
//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//template<class T>
//T Min(T a, T b) {
//	return a >= b ? b : a;
//}
//
//template<>
//string Min<string>(string a, string b) {
//	auto m = a.length();
//	auto n = b.length();
//	return m >= n ? b : a;
//}
//int main()
//{
//
//	string x = "Hello";
//	string y = "Hi";
//	std::cout << Min(x, y) << std::endl; // Hi
//}
