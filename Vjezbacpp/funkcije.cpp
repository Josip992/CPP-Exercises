#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ios>
#include<cmath>
#include<time.h>
#include<string>
#include<vector>
using namespace std;

vector<int> funkcija(vector<int>& vec, unsigned n) {

	int brojac = 0;

	for (int i = 0; i < n; i++) {
		cout << vec[i] << endl;
	}

	for (int i = 0; i < n - brojac; i++) {
		if (vec[i] % 2 == 0) {
			cout << vec[i] << endl;
			vec.push_back(vec[i]);
			vec.erase(vec.begin() + i);
			cout << "pronaden" << endl;
			brojac++;
		}
	}
	return vec;
}