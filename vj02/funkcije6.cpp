#include<iostream>
#include<ios>
using namespace std;
#include<vector>
#include<cstring>
#include <algorithm>


bool vowels(char s) {
	string vowels = "aeiouAEIOU";
	for (int i = 0; i < 11; i++) {
		if (s == vowels[i]) { return true;
		}
			} return false;
		}
	string ay(string str) {
	int i = 0;
	while (!vowels(str[i])) {
		i++; }
	return str.substr(i) + str.substr(0, i) + "ay";
	}
	void PigLatin(string* str) {
	stringstream s(*str);
	string word;
	string pig_latin;
	while (s >> word) {
	if (ispunct(word[0])) pig_latin += word;
		else {
			if (vowels(word[0])) {
				pig_latin += word + "hay ";
			} else pig_latin += ay(word) + " ";
			} } *str = pig_latin;}
