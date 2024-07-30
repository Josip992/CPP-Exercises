#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include<ctype.h>

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


