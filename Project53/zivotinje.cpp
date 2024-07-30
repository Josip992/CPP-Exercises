#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include<ctype.h>

using namespace std;

class animal
{
public:
	virtual int get_legs() = 0;
	virtual string get_species() = 0;
	virtual ~animal() = 0;

};

animal :: ~animal() {}

class spider : public animal
{
protected:
	string name = "spider";
public:
	//int get_legs()
	//{
	//	return 0;
	//}
	//string get_species()
	//{
	//	return name;
	//}

};

class insect : public animal
{
protected:
	string name = "insect";
public:
	/*int get_legs()
	{
		return 0;
	}
	string get_species()
	{
		return name;
	}*/
};

class bird : public animal
{
protected:
	string name = "bird";
public:
	int get_legs()
	{
		return 0;
	}
	string get_species()
	{
		return name;
	}
};

class tarantula : public spider
{
protected:
	string name = "tarantula";
	int legs = 8;
public:
	string get_species()
	{
		return name;
	}
	int get_legs()
	{
		return legs;
	}
};

class cockroach : public insect
{
protected:
	string name = "zohar";
	int legs = 6;
public:
	string get_species()
	{
		return name;
	}
	int get_legs()
	{
		return legs;
	}
};

class sparrow : public bird
{
protected:
	string name = "vrabac";
	int legs = 2;
public:
	string get_species()
	{
		return name;
	}
	int get_legs()
	{
		return legs;
	}
};

class counter
{
private:
	int count = 0;

public:
	vector <string> animals;
	/*string get_species(animal& animal_kingdom)
	{
		return animal_kingdom.get_species();
	}
	int get_legs(animal &animal_kingdom)
	{
		return animal_kingdom.get_legs();
	}*/
	vector <string> count_all(animal& animal_kingdom)
	{
		count += animal_kingdom.get_legs();
		animals.push_back(animal_kingdom.get_species());
		return animals;
	}
	int get_count() const
	{
		return count;
	}
};

int main()
{
	/*animal* ptrspider;
	spider spider1;
	ptrspider = &spider1;
	cout << ptrspider->get_species() << endl;

	spider* ptrspider1;
	tarantula tarantula1;
	ptrspider1 = &tarantula1;
	cout << ptrspider1->get_species() << "-> number of legs: " << ptrspider1->get_legs() << endl;*/

	//tarantula t;
	//cout << t.get_legs();

	vector <string> animals;
	//counter cc;

	counter count;
	tarantula pauk;
	cockroach zohar;
	sparrow vrabac;

	//cout << cc.get_species(pauk) << endl;

	animals = count.count_all(pauk);
	animals = count.count_all(zohar);
	animals = count.count_all(vrabac);

	for (string s : animals)
	{
		cout << "dodan: " << s << endl;
	}
	cout << "Ukupan broj nogu: " << count.get_count();

	return 0;
}