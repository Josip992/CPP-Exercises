#include <iostream>
#include <string.h>

using namespace std;

template <class T>
T min1(T a, T b)
{
	if (a<=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template<>
string min1<string>(string str1, string str2)
{
	int d1 = str1.length();
	int d2 = str2.length();

	if (d1<=d2) {
		return str1;
	}
	else {
		return str2;
	}
}
