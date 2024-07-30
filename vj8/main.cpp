#include <iostream>
using namespace std;
#include "manji.hpp"
#include "set.hpp"
#include<string>

int main()
{
	string str1,str2;
	int a, b;
	cout << "Unesite str1: " << endl;
	getline(cin,str1);
	cout << "Unesite str2: " << endl;
	getline(cin,str2);

	cout << "Unesite a: " << endl;
	cin >> a;
	cout << "Unesite b: " << endl;
	cin >> b;

	cout << min1(a, b) << endl;
	cout << min1(str1, str2) << endl;

	Set_br <int> set;
	set.dodaj(a);
	set.dodaj(b);
	set.dodaj(22);
	set.ukloni_el(22);
	

	return 0;
}





















































































