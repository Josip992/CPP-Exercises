#include "VectorSTL.hpp"

int main()
{
	VectorSTL vec;
	vec.find_odd_number();
	int odd_numbers = vec.count_odd_numbers();
	cout << "Neparnih brojeva je: " << odd_numbers << endl;
	
	vector<int> vect = vec.to_the_power_of_two();
	cout << "Zamijenute sve potencije broja 2 sa 2: ";
	for (auto i : vect)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "Svi parni brojevi od manjeg ka vecima: ";

	vector<int> v = vec.sort_even_odd();
	for (auto i : v)
	{
		cout << i << " ";
	}

	cout << endl;
	cout << "Svi neparni brojevi od manjeg ka vecima: ";

	vector<int> v2 = vec.sort_odd_even();
	for (auto i : v2)
	{
		cout << i << " ";
	}
	cout << endl;
}