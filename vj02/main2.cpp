#include <iostream>
#include<vector>
using namespace std;
#include "funkcije2.hpp"

/*2. Koristeći STL funkcije sortirajte vektor, ubacite 0 ispred najmanjeg elementa, te
sumu svih elemenata iza najvećeg elementa.
*/

int main()
{
	vector<int> josip;
	int n;

	cout << "Unesite broj elemenata u vektoru: ";
	cin >> n;

	unos(josip, n);
	sortiranje(josip, n);
	ispis(josip, n);


	return 0;
}
