#include "VectorSTL.hpp"

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

void VectorSTL::find_odd_number()
{
	it = find_if(vec.begin(), vec.end(), is_odd);
	if (it != vec.end())
	{
		cout << "Prvi neparni broj: " << *it << endl;
	}
	else
	{
		cout << "Nema neparnoga broja!" << endl;
	}
}

int VectorSTL::count_odd_numbers()
{
	numbers = count_if(vec.begin(), vec.end(), is_odd);
	return numbers;
}

vector<int> VectorSTL::to_the_power_of_two()
{
	replace_if(vec.begin(), vec.end(), is_power_of_two, 2);
	return vec;
}

vector<int> VectorSTL::sort_even_odd()
{
	sort(vec.begin(), vec.end());
	vector<int> sorting;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec.at(i) % 2 == 0)
		{
			sorting.push_back(vec.at(i));
			vec.erase(vec.begin() + i, vec.begin() + i + 1);
			i--;
		}
	}
	for (int i = 0; i < vec.size(); i++)
	{
		sorting.push_back(vec.at(i));
	}
	return sorting;
}
vector<int> VectorSTL::sort_odd_even()
{
	sort(vec.begin(), vec.end());
	vector<int> sorting;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec.at(i) % 2 == 1)
		{
			sorting.push_back(vec.at(i));
			vec.erase(vec.begin() + i, vec.begin() + i + 1);
			i--;
		}
	}
	for (int i = 0; i < vec.size(); i++)
	{
		sorting.push_back(vec.at(i));
	}
	return sorting;
}