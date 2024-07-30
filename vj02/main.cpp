#include <iostream>
using namespace std;
#include<vector>
#include "funkcije.hpp"


int main() {

	vector<int> josip;
	int n;
	int gornja;
	int donja;

	cout << "Unesite broj elemenata vektora: ";
	cin >> n;
	cout << "Unesite gornju granicu: " << endl;
	cin >> gornja;
	cout << "Unesite donju granicu: " << endl;
	cin >> donja;

	unos(josip, n);
	ispis(josip, n);
	unos2(josip,n,gornja,donja);


	return 0;

}
