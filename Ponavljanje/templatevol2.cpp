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
