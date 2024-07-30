#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool is_odd(int i);
bool is_power_of_two(int n);

class VectorStl
{
	vector<int> vec = { 16, 1, 8, 6, 13, 3, 2, 4, 5, 20, 18, 3, 4, 7 };
	vector<int>::iterator it;
	int numbers = 0;

public:
	void find_odd_number();
	int count_odd_numbers();
	vector<int> to_the_power_of_two();
	vector<int> sort_even_odd();
};

bool is_odd(int i)
{
	return i % 2;
}

bool is_power_of_two(int n)
{
	if (n > 0)
	{
		while (n % 2 == 0)
		{
			n /= 2;
		}
		if (n == 1)
		{
			return 1;
		}
	}
	if (n == 0 || n != 1)
	{
		return 0;
	}
	return 0;
}

void VectorStl::find_odd_number()
{
	it = find_if(vec.begin(), vec.end(), is_odd);
	if (it != vec.end())
	{
		cout << "Prvi neparni broj: " << *it << endl;
	}
	else
	{
		cout << "Nema neparnog broja u vektoru" << endl;
	}
}

int VectorStl::count_odd_numbers()
{
	numbers = count_if(vec.begin(), vec.end(), is_odd);
	return numbers;
}

vector<int> VectorStl::to_the_power_of_two()
{
	replace_if(vec.begin(), vec.end(), is_power_of_two, 2);
	return vec;
}

vector<int> VectorStl::sort_even_odd()
{
	sort(vec.begin(), vec.end());
	vector<int> sorting;
	for (int i = 0; i < vec.size(); i += 1)
	{
		if (vec.at(i) % 2 == 0)
		{
			sorting.push_back(vec.at(i));
			vec.erase(vec.begin() + i, vec.begin() + i + 1);
			i -= 1;
		}
	}
	for (int i = 0; i < vec.size(); i += 1)
	{
		sorting.push_back(vec.at(i));
	}
	return sorting;
}

int main()
{
	VectorStl vec;
	vec.find_odd_number();
	int odd_numbers = vec.count_odd_numbers();
	cout << "Broj neparnih brojeva u vektoru iznosi: " << odd_numbers << endl;

	/*vector<int> vect = vec.to_the_power_of_two();
	for (auto x : vect)
	{
		cout << x << " ";
	}*/

	vector<int> v = vec.sort_even_odd();
	for (auto x : v)
	{
		cout << x << " ";
	}
}

