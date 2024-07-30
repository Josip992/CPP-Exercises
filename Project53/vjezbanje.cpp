#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include<ctype.h>

using namespace std;

//Napisati funkciju count_letter koja prima jedan 
//po jedan znak sa ulaza.Funkcija broji broj 
//samoglasnikai suglasnika i baca iznimku u 
//sluèaju da je unesen znak koji nije slovo.

int count_letter()
{
	int counter = 0;
	string c;
	cout << "Unesite jedan po jedan znak, pritisnite ctrl +z za kraj:" << endl;
	string operators = "aeiou";
	while (getline(cin, c))
	{
		for (char x : c)
		{
			if (!isalpha(x))
			{
				throw "not a letter";
			}
		}

		if (c.length() == 1 && operators.find(c) != string::npos)
		{
			counter++;
		}
	}
	return counter;

}

int main()
{
	try 
	{
		int count = count_letter();
		cout << count;
	}
	catch (const char* message)
	{
		cout << message;
	}

}