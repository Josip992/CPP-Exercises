#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include <ctype.h>
#include <math.h>

using namespace std;

//.Napisati apstraktnu klasu Quad koja predstavlja èetverokut 
//zadan sa èetiri stranice i funkcije za opseg i površinu.
//Stranice èetverokuta su privatne varijable.Napisati 
//izvedene klase za kvadrat i pravokutnik i potrebne funkcije.
//Napisati funkciju koja za vektor èetverokuta raèuna onaj 
//najveæe površine.U main funkciji napuniti vektor pravokutnicima
//i kvadratima te ispisati duljine stranica i vrst èetverokuta najveæe
//površine.

class Quad
{
protected:
	float a, b, c, d;
public:
	Quad()
	{
		a = 0;
		b = 0;
		c = 0;
		d = 0;

	}
	void postavi_stranice(float prva, float druga, float treca, float cetvrta)
	{
		a = prva;
		b = druga;
		c = treca;
		d = cetvrta;
	}
	virtual float opseg() = 0;
	virtual float povrsina() = 0;

	/*float opseg()
	{
		return (a + b + c + d);
	}
	float povrsina()
	{
		return sqrt(a * b * c * d);
	}*/
};

class Kvadar: public Quad
{
	void postavi_kvadar(float stranica)
	{
		a = stranica;
	}
	float opseg()
	{
		return (4 * a);
	}
	float povrsina()
	{
		return(a * a);
	}
};

class Pravokutnik : public Quad
{
	void postavi_pravokutnik(float stranica, float stranicadva)
	{
		a = stranica;
		b = stranicadva;
		
	}
	float opseg()
	{
		return( 2* (a +  b));
	}

	float povrsina()
	{
		return (a * b);
	}

};


int main()
{
	vector <float> vec = { 1,6,3,4,1,3,16,18,8,2 };
	
	Kvadar kvadar;
	Pravokutnik pravokutnik;
	float prva = 0;
	int brojac = 0;
	string cetverokut = "nista";
	
	for (float x : vec)
	{
		if (x > prva && brojac > 0)
		{

		}
		if (x > prva);
		{
			x = prva;
			cetverokut = "kvadar";
		}
		brojac++;
	}
	
}