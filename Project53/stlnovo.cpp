#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;
int isSame(char c)
{
	if (c == 'e')
	{
		return 1;
	}
	return 0;
}

int main()
{
	string sentence = "ovo je jedna recenica.";
	int count = count_if(sentence.begin(), sentence.end(), isSame);
	cout << count;
}

int main()
{
string sentence = "ovo je jedna recenica.";
char letter = 'e';
int count = count_if(sentence.begin(), sentence.end(), [letter](char c){ return c == letter; });
cout << count;

}