#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include<ctype.h>
#include<math.h>

using namespace std;

//class Array 
//{
//	int n;
//	string* arr;
//
//public:
//	Array(int n) {
//		this->n = n;
//		arr = new string[n];
//	}
//
//	~Array() {
//		delete[] arr;
//	}
//
//	void append(int i, string word) {
//		word.erase(remove(word.begin(), word.end(), ' '), word.end());
//		arr[i] = word;
//	}
//
//	friend ostream& operator<<(ostream& s, const Array& a) {
//		for (int i = 0; i < a.n; ++i)
//			s << "../" << a.arr[i] << endl;
//		return s;
//	}
//};
//
//int main() {
//	int n = 3;
//	string s[] = { " usr " , " lib " , " home " };
//	Array a(n);
//	for (int i = 0; i < n; ++i)
//		a.append(i, s[i]);
//	cout << a;
//}

//../usr
//../lib
//../home



//class money {
//	int m_kune, m_lipe;
//
//public:
//	money(int kune = 0, int lipe = 0) {
//		m_kune = kune;
//
//		while (lipe > 100) {
//			lipe -= 100;
//			m_kune++;
//		}
//
//		m_lipe = lipe;
//	}
//
//	money operator+(const money& a) 
//	{
//		money novac;
//		novac.m_kune = m_kune + a.m_kune;
//		novac.m_lipe = m_lipe + a.m_lipe;
//
//		while (novac.m_lipe > 100) {
//			novac.m_lipe -= 100;
//			novac.m_kune++;
//		}
//
//		return novac;
//	}
//
//	friend ostream& operator<<(ostream& s, const money& a) {
//		return s << a.m_kune << " kuna, " << a.m_lipe << " lipa";
//	}
//};
//
//
//int main() {
//	money papers(6, 50), coffee(5, 70), sugar(1);
//	money bill;
//	bill = papers + coffee + sugar;
//	cout << " Total : " << bill << std::endl;
//}
//
////Total: 13 kuna, 20 lipa
//
