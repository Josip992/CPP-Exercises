#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

class File
{
public:
	ifstream open_file();
	vector<int> put_in_vector(ifstream& file);
	void min_max(int& min, int& max, vector<int>& vec);
	vector <int> erase_elements(vector<int>& vec);
	vector <int> sort_in_reverse(vector<int>& vec);
};

class Bigger
{
	int limit;
public:
	Bigger(int limit) : limit(limit) {}
	bool operator()(int n) { return n > limit; }
};

int count_numbers(vector<int>& vec);



ifstream File::open_file()
{
	ifstream file("numbers.txt");
	if (!file)
	{
		throw "There is no file under that name opened";
	}
	return file;
}

vector<int> File::put_in_vector(ifstream& file)
{
	istream_iterator<int> it(file);
	istream_iterator<int> eos;
	vector<int> v;
	copy(it, eos, back_inserter(v));
	return v;
}

void File::min_max(int& min, int& max, vector<int>& vec)
{
	min = *min_element(vec.begin(), vec.end());
	max = *max_element(vec.begin(), vec.end());
}


vector<int> File::erase_elements(vector<int>& vec)
{

	for (int i = 0; i < vec.size(); i += 1)
	{
		if (vec.at(i) < 300)
		{
			vec.erase(vec.begin() + i, vec.begin() + i + 1);
			i -= 1;
		}
	}
	return vec;
}

vector<int> File::sort_in_reverse(vector<int>& vec)
{
	sort(vec.begin(), vec.end(), greater<int>());
	return vec;
}

int count_numbers(vector<int>& vec)
{
	int cnt = count_if(vec.begin(), vec.end(), Bigger::Bigger(500));
	return cnt;
}



int main()
{
	try
	{
		File document;
		ifstream file = document.open_file();
		vector <int> vec = document.put_in_vector(file);
		for (auto x : vec)
		{
			cout << x << " ";
		}
		int numbers = count_numbers(vec);
		cout << numbers << endl;

		int min, max;
		document.min_max(min, max, vec);
		cout << min << endl;
		cout << max << endl;

		vector<int> vect = document.erase_elements(vec);
		for (auto x : vect)
		{
			cout << x << " ";
		}
		cout << endl;

		vector<int> v = document.sort_in_reverse(vect);
		for (auto x : v)
		{
			cout << x << " ";
		}
	}

	catch (const char* message)
	{
		cout << message;
		return -1;
	}
}
