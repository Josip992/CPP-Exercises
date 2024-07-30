////3. (15) Proširite klasu
////class array { int n; string* arr; }
////tako da sljede´ci program
////int main()
////{
////	int n = 3;
////	string s[] = { " usr " , " lib " , " home " };
////	array a(n);
////	for (int i = 0; i < n; ++i)
////		a.append(i, s[i]);
////	cout << a;
////}
////ispisuje
////.. / usr
////.. / lib
////.. / home
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class MyArray {
//public:
//	int n;
//	string* arr;
//	MyArray(int br) {
//		n = br;
//		arr = new string[n];
//	}
//
//	friend ostream& operator<< (ostream& os, const MyArray& a) {
//		for (int i = 0; i<a.n; i++) {
//			os << ".. /" << a.arr[i] << endl;
//		}
//		return os;
//	}
//
//	void append(int i, string s) {
//		for (int j = 0;j<n;j++) {
//			arr[i] = s;
//		}
//	}
//};
//
//int main()
//{
//	int n = 3;
//	string s[] = {"usr","lib","home"};
//	MyArray a(n);
//	for (int i = 0; i < n; ++i)
//		a.append(i, s[i]);
//	cout << a;
//}