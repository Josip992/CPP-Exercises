#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include<ctype.h>
#include<math.h>

using namespace std;



/*Napisati funkciju koja puni vektor stringova linijama
unesenim sa tipkovnice.Napisati drugu funkciju koja
svaki string iz vektora preslaže tako da svaku riječ
u stringu okrene naopako iskljucujući znakove
interpunkcije*/


int main()
{
	string s;
	vector<string> v;
	int brojac = 0;
	while (getline(cin, s))
	{
		//s.erase(remove(s.begin(), s.end(), '.'), s.end()); // tako za sve .,?! 
		for (int i = 0; i < s.length(); i++)
		{
			if (ispunct(s[i]))
			{
				s.erase(s.begin() + i, s.begin() + 1 + i);
				i -= 1;
			}
		}
		
		reverse(s.begin(), s.end());
		v.push_back(s);
	}

	for (string x : v)
	{
		cout << x << endl;

	}
	

}


//
////Napisati funkciju count_letter koja prima jedan 
////po jedan znak sa ulaza.Funkcija broji broj 
////samoglasnikai suglasnika i baca iznimku u 
////slučaju da je unesen znak koji nije slovo.
//
//int count_letter()
//{
//	int counter = 0;
//	string c;
//	cout << "Unesite jedan po jedan znak, pritisnite ctrl +z za kraj:" << endl;
//	string operators = "aeiou";
//	while (getline(cin, c))
//	{
//		for (char x : c)
//		{
//			if (!isalpha(x))
//			{
//				throw "not a letter";
//			}
//		}
//
//		if (c.length() == 1 && operators.find(c) != string::npos)
//		{
//			counter++;
//		}
//	}
//	return counter;
//
//}
//
//int main()
//{
//	try
//	{
//		int count = count_letter();
//		cout << count;
//	}
//	catch (const char* message)
//	{
//		cout << message;
//	}
//
//}
//
//




//U datoteci su dane koordinate točaka(x, y, z) tako da je 
//u svakom redu jedna točka.Napisati program koji transformira 
//sve z - koordinate primjenjujući funkciju fun(x, y, z) 
//gdje je fun funkcija fun(x, y, z) = z + x2 + y2
//te nove koordinate zapisuje u drugu datoteku.
//Operacije transformiranja i čitanja i pisanja u datoteku
//realizirati koristeći standardnu biblioteku.

//
//int main()
//{
//	ifstream fin("brojevi.txt");
//	ofstream fout("izmjena.txt");
//
//	istream_iterator<float> it(fin);
//	istream_iterator<float> eos;
//	vector<float> v;
//	copy(it, eos, back_inserter(v));
//	int brojac = 0;
//	for (float x : v)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//	vector<float> vv;
//	for (int i = 0; i < v.size(); i += 3)
//	{
//		int x = 0 + i;
//		int y = 1 + i;
//		int z = 2 + i;
//		float xx = v.at(x);
//		float yy = v.at(y) * v.at(y);
//		float zz = v.at(z) * v.at(z);
//		vv.push_back(xx);
//		vv.push_back(yy);
//		vv.push_back(zz);
//	}
//	
//	for (float x : vv)
//	{
//		cout << x << " ";
//	}
//
//}
//


//Napisati klasu razlomak.Napisati funkciju koja puni 
//vektor razlomaka iz datoteke, te sve elemente vektora
//skrati.Za punjenje vektora i skraćivanje koristiti 
//funkcije standardne biblioteke.

//class Razlomak
//{
//	vector <float> vec;
//public:
//	ifstream open_file()
//	{
//		ifstream file("brojevi.txt");
//		if (!file)
//		{
//			throw "Nema dokumenta pod tim imenom";
//		}
//		return file;
//	}
//	vector<float>put_in_vector(ifstream& file)
//	{
//		istream_iterator<float> it(file);
//		istream_iterator<float> eos;
//		copy(it, eos, back_inserter(vec));
//
//		return vec;
//	}
//	vector<float>skrati()
//	{
//		float broj;
//		cout << "unesite s kojim brojem zelite skratiti vektor razlomaka:";
//		cin >> broj;
//		vector<float> sk;
//		for (float x : vec)
//		{
//			sk.push_back(x / broj);
//		}
//		return sk;
//	}
//
//};
//
//
//int main()
//{
//	try
//	{
//		Razlomak razlomak;
//		ifstream file = razlomak.open_file();
//		vector <float> vec = razlomak.put_in_vector(file);
//		for (float x : vec)
//		{
//			cout << x << " ";
//		}
//		vector <float> vec1 = razlomak.skrati();
//		for (float x : vec1)
//		{
//			cout << x << " ";
//		}
//
//	}
//	catch (const char* message)
//	{
//		cout << message;
//		return -1;
//	}
//
//
//}


////Napišite klasu array tako da sljedeci program
////ispisuje sve elemente polja.Klasa ima polje
////kao privatni clan.U konstruktoru se svi elementi
////postavljaju na zadanu vrijednost
//template <typename T, size_t N>
//class Array {
//private:
//    T niz[N];
//
//public:
//    Array(T element)
//    {
//       fill(niz, niz + N, element);
//    }
//
//    T& operator[] (int index) {
//        return niz[index];
//    }
//   
//
//   T* begin() 
//    {
//        return niz;
//    }
//
//    T* end()  
//    {
//        return niz + N;
//    }
//};
//
//class provjera 
//{
//    
//public:
//    float niz_provjera[5] = { 2, 5, 6, 8, 9 };
//    float& operator[] (int index)
//    {
//        return niz_provjera[index];
//    }
//
//};
//
//int main()
//{
//	std::ostream_iterator < double > os(std::cout, "␣");
//	Array < double, 16 > a(1);
//	a[0] = a[1] = 3.14;
//	std::copy(a.begin(), a.end(), os);
//
//
//    cout << endl;
//    provjera pro;
//    pro[3] = 10;
//    for (int i = 0; i < 5; i++)
//    {
//        cout << pro.niz_provjera[i] << " ";
//    }
//
//}


//bool is_odd(int i)
//{
//	return i % 2;
//}
//bool is_power_of_two(int n)
//{
//	if (n > 0)
//	{
//		while (n % 2 == 0)
//		{
//			n /= 2;
//		}
//		if (n == 1)
//		{
//			return 1;
//		}
//	}
//	if (n == 0 || n != 1)
//	{
//		return 0;
//	}
//	return 0;
//}
//
//class VectorStl
//{
//	vector<int> vec = { 16, 1, 8, 6, 13, 3, 2, 4, 5, 20, 18, 3, 4, 7 };
//	vector<int>::iterator it;
//	int numbers = 0;
//
//public:
//	void find_odd_number()
//	{
//		it = find_if(vec.begin(), vec.end(), is_odd);
//		if (it != vec.end())
//		{
//			cout << "Prvi neparni broj: " << *it << endl;
//		}
//		else
//		{
//			cout << "Nema neparnog broja u vektoru" << endl;
//		}
//	}
//
//	int count_odd_numbers()
//	{
//		numbers = count_if(vec.begin(), vec.end(), is_odd);
//		return numbers;
//	}
//	vector<int> to_the_power_of_two()
//	{
//		replace_if(vec.begin(), vec.end(), is_power_of_two, 2);
//
//		return vec;
//	}
//	vector<int> sort_even_odd()
//	{
//		sort(vec.begin(), vec.end());
//		vector<int> sorting;
//		for (int i = 0; i < vec.size(); i += 1)
//		{
//			if (vec.at(i) % 2 == 0)
//			{
//				sorting.push_back(vec.at(i));
//				vec.erase(vec.begin() + i, vec.begin() + i + 1);
//				i -= 1;
//			}
//		}
//		for (int i = 0; i < vec.size(); i += 1)
//		{
//			sorting.push_back(vec.at(i));
//		}
//		return sorting;
//	}
//};
//
//
//int main()
//{
//	VectorStl vec;
//	vec.find_odd_number();
//	int odd_numbers = vec.count_odd_numbers();
//	cout << "Broj neparnih brojeva u vektoru iznosi: " << odd_numbers << endl;
//
//	vector<int> vect = vec.to_the_power_of_two();
//	for (auto x : vect)
//	{
//		cout << x << " ";
//	}
//
//	/*vector<int> v = vec.sort_even_odd();
//	for (auto x : v)
//	{
//		cout << x << " ";
//	}*/
//	int a = 0 % 2;
//	cout << "bla bla" << a;
//}


//class File
//{
//public:
//	ifstream open_file()
//	{
//		ifstream file("numbers.txt");
//		if (!file)
//		{
//			throw "There is no file under that name opened";
//		}
//		return file;
//	}
//	vector<int> put_in_vector(ifstream& file)
//	{
//		istream_iterator<int> it(file);
//		istream_iterator<int> eos;
//		vector<int> v;
//		copy(it, eos, back_inserter(v));
//		return v;
//	}
//
//	void min_max(int& min, int& max, vector<int>& vec)
//	{
//		min = *min_element(vec.begin(), vec.end());
//		max = *max_element(vec.begin(), vec.end());
//	}
//
//	vector <int> erase_elements(vector<int>& vec)
//	{
//
//		for (int i = 0; i < vec.size(); i += 1)
//		{
//			if (vec.at(i) < 300)
//			{
//				vec.erase(vec.begin() + i, vec.begin() + i + 1);
//				i -= 1;
//			}
//		}
//		return vec;
//	}
//
//	vector <int> sort_in_reverse(vector<int>& vec)
//	{
//		sort(vec.begin(), vec.end(), greater<int>());
//		return vec;
//	}
//};
//
//class Bigger
//{
//	int limit;
//public:
//	Bigger(int limit) : limit(limit) {}
//	bool operator()(int n) { return n > limit; }
//};
//
//
//
//int count_numbers(vector<int>& vec)
//{
//	int cnt = count_if(vec.begin(), vec.end(), Bigger::Bigger(500));
//	return cnt;
//}
//
//
//
//int main()
//{
//	try
//	{
//		File document;
//		ifstream file = document.open_file();
//		vector <int> vec = document.put_in_vector(file);
//		for (auto x : vec)
//		{
//			cout << x << " ";
//		}
//		int numbers = count_numbers(vec);
//		cout <<endl << numbers << "ha" << endl;
//
//		int min, max;
//		document.min_max(min, max, vec);
//		cout << min << endl;
//		cout << max << endl;
//
//		vector<int> vect = document.erase_elements(vec);
//		for (auto x : vect)
//		{
//			cout << x << " ";
//		}
//		cout << endl;
//
//		vector<int> v = document.sort_in_reverse(vect);
//		for (auto x : v)
//		{
//			cout << x << " ";
//		}
//	}
//
//	catch (const char* message)
//	{
//		cout << message;
//		return -1;
//	}
//}

//using namespace std;
//class animal
//{
//public:
//	virtual int get_legs() = 0;
//	virtual string get_species() = 0;
//	virtual ~animal() = 0;
//
//};
//
//animal :: ~animal() {}
//
//class spider : public animal
//{
//protected:
//	string name = "spider";
//public:
//	//int get_legs()
//	//{
//	//	return 0;
//	//}
//	//string get_species()
//	//{
//	//	return name;
//	//}
//
//};
//
//class insect : public animal
//{
//protected:
//	string name = "insect";
//public:
//	/*int get_legs()
//	{
//		return 0;
//	}
//	string get_species()
//	{
//		return name;
//	}*/
//};
//
//class bird : public animal
//{
//protected:
//	string name = "bird";
//public:
//	int get_legs()
//	{
//		return 0;
//	}
//	string get_species()
//	{
//		return name;
//	}
//};
//
//class tarantula : public spider
//{
//protected:
//	string name = "tarantula";
//	int legs = 8;
//public:
//	string get_species()
//	{
//		return name;
//	}
//	int get_legs()
//	{
//		return legs;
//	}
//};
//
//class cockroach : public insect
//{
//protected:
//	string name = "zohar";
//	int legs = 6;
//public:
//	string get_species()
//	{
//		return name;
//	}
//	int get_legs()
//	{
//		return legs;
//	}
//};
//
//class sparrow : public bird
//{
//protected:
//	string name = "vrabac";
//	int legs = 2;
//public:
//	string get_species()
//	{
//		return name;
//	}
//	int get_legs()
//	{
//		return legs;
//	}
//};
//
//class counter
//{
//private:
//	int count = 0;
//
//public:
//	vector <string> animals;
//	/*string get_species(animal& animal_kingdom)
//	{
//		return animal_kingdom.get_species();
//	}
//	int get_legs(animal &animal_kingdom)
//	{
//		return animal_kingdom.get_legs();
//	}*/
//	vector <string> count_all(animal& animal_kingdom)
//	{
//		count += animal_kingdom.get_legs();
//		animals.push_back(animal_kingdom.get_species());
//		return animals;
//	}
//	int get_count() const
//	{
//		return count;
//	}
//};
//
//int main()
//{
//	/*animal* ptrspider;
//	spider spider1;
//	ptrspider = &spider1;
//	cout << ptrspider->get_species() << endl;
//
//	spider* ptrspider1;
//	tarantula tarantula1;
//	ptrspider1 = &tarantula1;
//	cout << ptrspider1->get_species() << "-> number of legs: " << ptrspider1->get_legs() << endl;*/
//
//	//tarantula t;
//	//cout << t.get_legs();
//
//	vector <string> animals;
//	//counter cc;
//
//	counter count;
//	tarantula pauk;
//	cockroach zohar;
//	sparrow vrabac;
//
//	//cout << cc.get_species(pauk) << endl;
//
//	animals = count.count_all(pauk);
//	animals = count.count_all(zohar);
//	animals = count.count_all(vrabac);
//
//	for (string s : animals)
//	{
//		cout << "dodan: " << s << endl;
//	}
//	cout << "Ukupan broj nogu: " << count.get_count();
//
//	return 0;
//}


//template<typename T>
//class point
//{
//	T x;
//	T y;
//
//public:
//	T get_x() const
//	{
//		return x;
//	}
//	T get_y() const
//	{
//		return y;
//	}
//
//	point()
//	{
//		x = 0;
//		y = 0;
//	}
//	point(T x_dot, T y_dot)
//	{
//		x = x_dot;
//		y = y_dot;
//
//	}
//
//	friend ostream& operator <<(ostream& os, const point& point_dot)
//	{
//		os << point_dot.x << ", " << point_dot.x;
//		return os;
//	}
//
//
//	float operator-(const point& distance)
//	{
//		float udaljenost;
//		float x_udaljenost = abs(x - distance.x);
//		float y_udaljenost = abs(y - distance.y);
//		return udaljenost = sqrt(pow(x_udaljenost, 2) + pow(y_udaljenost, 2));
//	}
//
//};
//
////template<typename T>
////inline
////ostream& operator<<(ostream& os, point <T>& point_dot)
////{
////	os << point_dot.get_x() << ", " << point_dot.get_y();
////	return os;
////}
//
//int main()
//{
//	point <int> p1(2, 3), p2(3, 4);
//	cout << " udaljenost tocaka " << p1 << " i " << p2 << " je " << p1 - p2 << endl;
//}



//template <typename T>
//class SetOfNumbers
//{
//	vector <T> vec;
//public:
//
//	vector <T> get_vector() const
//	{
//		return vec;
//	}
//
//	void add_element(T element)
//	{
//		vec.push_back(element);
//	}
//
//	void remove_element(T element)
//	{
//		vec.erase(remove(vec.begin(), vec.end(), element), vec.end());
//	}
//
//	bool check_for_element(T element)
//	{
//		for (auto x : get_vector())
//		{
//			if (x == element)
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	SetOfNumbers <int> set;
//
//	set.add_element(5);
//	set.add_element(7);
//	set.add_element(3);
//	set.add_element(8);
//	set.add_element(3);
//	set.remove_element(3);
//
//	for (auto x : set.get_vector())
//	{
//		cout << x << " ";
//	}
//	cout << endl << set.check_for_element(7);
//	cout << endl << set.check_for_element(10);
//}


//int main()
//{
//	/*vector <int> vec = { 10,20,300,40 };
//	vector <int> ::iterator it = find(vec.begin(), vec.end(), 30);
//		if (it != vec.end())
//		{
//			cout << "ima ga";
//		}
//		string a = "mrkva i neka rijec";
//		if (a.find("mrka") != string::npos)
//		{
//			cout << "ima";
//		}*/
//
//}
