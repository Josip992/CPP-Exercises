#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>

using namespace std;

//Napisati klasu razlomak.Napisati funkciju koja puni 
//vektor razlomaka iz datoteke, te sve elemente vektora
//skrati.Za punjenje vektora i skraæivanje koristiti 
//funkcije standardne biblioteke.

class Razlomak
{
	vector <float> vec;
public:
	ifstream open_file()
	{
		ifstream file("brojevi.txt");
		if(!file)
		{
			throw "Nema dokumenta pod tim imenom";
		}
		return file;
	}
	vector<float>put_in_vector(ifstream& file)
	{
		istream_iterator<int> it(file);
		istream_iterator<int> eos;
		copy(it, eos, back_inserter(vec));

		return vec;
	}
	vector<float>skrati()
	{
		float broj;
		cout << "unesite s kojim brojem zelite skratiti vektor razlomaka:";
		cin >> broj;
		vector<float> sk;
		for (float x : vec)
		{
			sk.push_back(x/broj);
		}
		return sk;
	}

};


int main()
{
	try
	{
		Razlomak razlomak;
		ifstream file = razlomak.open_file();
		vector <float> vec = razlomak.put_in_vector(file);
		for (float x : vec)
		{
			cout << x << " ";
		}
		vector <float> vec1 = razlomak.skrati();
		for (float x : vec1)
		{
			cout << x << " ";
		}
	
	}
	catch (const char* message)
	{
		cout << message;
		return -1;
	}


}