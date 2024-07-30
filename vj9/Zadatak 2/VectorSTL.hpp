#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <algorithm>


using namespace std;

bool is_odd(int i);
bool is_power_of_two(int n);

class VectorSTL
{
	vector<int> vec = { 67, 4, 20, 8, 2, 6, 12, 24 };
	vector<int>::iterator it;
	int numbers = 0;
public:
	void find_odd_number();
	int count_odd_numbers();
	vector<int> to_the_power_of_two();
	vector<int> sort_even_odd();
	vector<int>sort_odd_even();

};



