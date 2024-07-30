#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include<ctype.h>

using namespace std;

/*Napisati funkciju koja puni vektor stringova linijama 
unesenim sa tipkovnice.Napisati drugu funkciju koja 
svaki string iz vektora preslaže tako da svaku rijeè 
u stringu okrene naopako iskljucujuæi znakove
interpunkcije*/


int main()
{
	string s;
	vector<string> v;
	int brojac = 0;
	while (getline(cin, s))
	{
		v.push_back(s);
	}

	for (string x : v)
	{
		//reverse(x.begin(), x.end());
		cout << x << endl;
		int start = 0;
		int end = 0;
		while (start < x.size() && !isalpha(s[start]))
		{
			start++;
		}

		end = start;
		while (end < x.size() && isalpha(s[end]))
		{
			end++;
		}
		reverse(x.begin() + start, x.begin() + end);
		start = end;
		
	}

}



	
			