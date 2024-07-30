#include <iostream>
using namespace std;
//Bazna klasa
class GeometrijskiLik {
protected:
	int sirina, visina;
public:
	/*GeometrijskiLik(int a, int b )
	{
		sirina = a;
		visina = b;
	}*/
	//dodajemo kljuènu rijeè virtual kako bi izvedene klase mogle implementirati povrsinu svaka na svoj naèin
		virtual int povrsina() = 0;
};
class Pravokutnik : public GeometrijskiLik {
public:
	Pravokutnik(int a, int b )
	{
		sirina = a;
		visina = b;
	}
	int povrsina()
	{
		cout << "Povrsina pravokutnika: " << (sirina * visina) << endl;
		return (sirina * visina);
	}
};
class Trokut : public GeometrijskiLik {
public:
	
	Trokut(int a, int b) 
	{
		sirina = a;
		visina = b;
	}

	int povrsina()
	{
		cout << "Povrsina trokuta: " << (sirina * (visina / 2)) << endl;
		return (sirina * visina / 2);
	}
};
int main()
{
	//GeometrijskiLik* g;
	Pravokutnik p(10, 7);
	Trokut t(10,5);
	//Referenciraj se na adresu pravokutnika
	//g = &p;
	//Ispiši površinu pravokutnika
	p.povrsina();
	//Referenciraj se na adresu trokuta
	//g = &t;
	//Ispiši površinu trokuta
		t.povrsina();

	return 0;
}

#include <iostream>
using namespace std;
//Bazna klasa
class GeometrijskiLik {
protected:
	int sirina, visina;
public:
	GeometrijskiLik(int a = 0, int b = 0)
	{
		sirina = a;
		visina = b;
	}
	//dodajemo kljuènu rijeè virtual kako bi izvedene klase mogle implementirati
	povrsinu svaka na svoj naèin
		virtual int povrsina() = 0;
};
class Pravokutnik : public GeometrijskiLik {
public:
	Pravokutnik(int a = 0, int b = 0) : GeometrijskiLik(a, b) { }
	int povrsina()
	{
		cout << "Povrsina pravokutnika: " << (sirina * visina) << endl;
		return (sirina * visina);
	}
};
class Trokut : public GeometrijskiLik {
public:
	Trokut(int a = 0, int b = 0) : GeometrijskiLik(a, b) { }
	int povrsina()
	{
		cout << "Povrsina trokuta: " << (sirina * (visina / 2)) << endl;
		return (sirina * visina / 2);
	}
};
int main()
{
	GeometrijskiLik* g;
	Pravokutnik p(10, 7);
	Trokut t(10, 5);
	//Referenciraj se na adresu pravokutnika
	g = &p;
	//Ispiši površinu pravokutnika
	g->povrsina();
	//Referenciraj se na adresu trokuta
	g = &t;
	//Ispiši površinu trokuta
	g->povrsina();

	return 0;
}