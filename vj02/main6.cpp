#include<iostream>
#include<ios>
using namespace std;
#include<vector>
#include<cstring>
#include "funkcije.hpp"
#include <algorithm>
#include<iostream>
#include<time.h>

int main(){
	vector <string> vstr;
	string str;

	cout << "Upisite recenice: " << endl;
	cout << "Za prekid ctrl+z i enter." << endl;

	while (getline(cin, str)) {
		vstr.push_back(str);
	}

	cout << "Unesene recenice su: " << endl;
	vector<string>::iterator it;

	for (it = vstr.begin(); it != vstr.end(); it++) {
		cout << *it << endl;
	}

	cout << "Broj unesenih stringova je: " << vstr.size() << endl;

	srand(time(NULL));
	int random_recenica = rand() % (vstr.size() - 1);

	cout << "Random recenica iz vectora je: " << random_recenica << endl;

	PigLatin(&vstr[random_recenica]);
	for (int i = 0; i < vstr.size(); i++) {
		cout << vstr[i] << endl;
	}

}
