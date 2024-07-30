zd1
main
#include <iostream>
#include <string.h>
#include "minimum.hpp"
using namespace std;

int main()
{
	cout << minimum(5, 2) << endl;
	cout << minimum("jedna duza recenica", "kraca recenica");

}

hpp
#include <iostream>
#include <string.h>

using namespace std;

template <class T>
T minimum(T first, T second)
{
	return first >= second ? second : first;
}

template<>
string minimum<string>(string first, string second)
{
	int m = first.length();
	int n = second.length();
	return first >= second ? second : first;
}

ZD2
main
#include <iostream>
#include <vector>
#include "setofnumbers.hpp"

using namespace std;

int main()
{
	SetOfNumbers <int> set;

	set.add_element(5);
	set.add_element(7);
	set.add_element(3);
	set.add_element(8);
	set.add_element(3);
	set.remove_element(3);

	for (auto x : set.get_vector())
	{
		cout << x << " ";
	}
	cout << endl << set.check_for_element(7);
	cout << endl << set.check_for_element(10);
}

hpp
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class SetOfNumbers
{
	vector <T> vec;
public:

	vector <T> get_vector() const
	{
		return vec;
	}

	void add_element(T element)
	{
		vec.push_back(element);
	}

	void remove_element(T element)
	{
		vec.erase(remove(vec.begin(), vec.end(), element), vec.end());
	}

	bool check_for_element(T element)
	{
		for (auto x : get_vector())
		{
			if (x == element)
			{
				return true;
			}
		}
		return false;
	}
};

ZD3
main
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include "sort.hpp"

using namespace std;

int main()
{
	vector <int> vec = { 15, 9, 2 ,5 ,9, 16, 3, 7 };

	for (auto x : sort_array(vec))
	{
		cout << x << " ";
	}

	vector <char> vec1 = { 'D', 'a', 'b', 'c', 'a', 'f', 'B', 'd', 'A' };
	cout << endl;

	for (auto x : sort_array(vec1))
	{
		cout << x << " ";
	}
}

hpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>


using namespace std;

template <class T>
vector<T> sort_array(vector <T>& vec)
{
	sort(vec.begin(), vec.end());
	return vec;
}

template<>
vector<char> sort_array <char>(vector <char>& vec)
{
	vector <char> vec1;
	for (auto x : vec)
	{
		if (isupper(x))
		{
			x = tolower(x);
			vec1.push_back(x);
		}
		else
		{
			vec1.push_back(x);
		}
	}
	sort(vec1.begin(), vec1.end());
	return vec1;

}

ZD4
main
#include <iostream>
#include <math.h>
#include "point.hpp"

using namespace std;


int main()
{
	point <int> p1(2, 3), p2(3, 4);
	cout << " udaljenost tocaka " << p1 << " i " << p2 << " je " << p1 - p2 << endl;
}


hpp
#include <iostream>
#include <math.h>

using namespace std;


template<typename T>
class point
{
	T x;
	T y;

public:
	T get_x() const
	{
		return x;
	}
	T get_y() const
	{
		return y;
	}

	point()
	{
		x = 0;
		y = 0;
	}
	point(T x_dot, T y_dot)
	{
		x = x_dot;
		y = y_dot;

	}

	friend ostream& operator<<(ostream& os, const point& point_dot);


	float operator-(const point& distance)
	{
		float udaljenost;
		float x_udaljenost = abs(x - distance.x);
		float y_udaljenost = abs(y - distance.y);
		return udaljenost = sqrt(pow(x_udaljenost, 2) + pow(y_udaljenost, 2));
	}

};

template<typename T>
inline
ostream& operator<<(ostream& os,  point <T>& point_dot)
{
	os << point_dot.get_x() << ", " << point_dot.get_y();
	return os;
}


