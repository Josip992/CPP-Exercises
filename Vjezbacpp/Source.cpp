#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ios>
#include<cmath>
#include<time.h>
#include<string>
#include<vector>
using namespace std;
#include "funkcije.hpp"

/*parne brojeve iz vektora prebacite na kraj vektora i preuredite vektor*/

int main() {

	vector<int> vec{1,2,3,4,5,6,7,8,9,10};
	unsigned n{ vec.size() };

	vector<int> vecP =funkcija(vec,n);

	for (auto itr = vecP.begin(); itr != vecP.end(); itr++) {
		cout << *itr;
	}

	return 0;
}