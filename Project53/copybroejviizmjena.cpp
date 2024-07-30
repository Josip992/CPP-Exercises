#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include<ctype.h>

using namespace std;


//U datoteci su dane koordinate toèaka(x, y, z) tako da je 
//u svakom redu jedna toèka.Napisati program koji transformira 
//sve z - koordinate primjenjujuæi funkciju fun(x, y, z) 
//gdje je fun funkcija fun(x, y, z) = z + x2 + y2
//te nove koordinate zapisuje u drugu datoteku.
//Operacije transformiranja i èitanja i pisanja u datoteku
//realizirati koristeæi standardnu biblioteku.


int main()
{
	ifstream fin("brojevi.txt");
	ofstream fout("izmjena.txt");
	
	istream_iterator<float> it(fin);
	istream_iterator<float> eos; 
	vector<float> v;
	copy(it, eos, back_inserter(v));
	int brojac = 0;
	for( float x : v)
	{
		cout << x << " ";
	}
	cout << endl;
	vector<float> vv;
	for (int i = 0; i < v.size(); i+=3)
	{
		int x = 0 + i;
		int y = 1 + i;
		int z = 2 + i;
		float xx = v.at[x];
		float yy = v.at[y] * v.at[y];
		float zz = v.at[z] * v.at[z];
		vv.push_back(xx);
		vv.push_back(yy);
		vv.push_back(zz);
	}
	cout << xx << "bla" << endl;
	for (float x : vv)
	{
		cout << x << " ";
	}


}