#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Set_br
{
public:
	vector <T> vec;

	void dodaj(T el)
	{
		vec.push_back(el);
	}

	void ukloni_el(T el)
	{
		vec.erase(std::remove(vec.begin(), vec.end(), el), vec.end());
	}
};
