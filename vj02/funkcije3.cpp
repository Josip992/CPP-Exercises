#include<iostream>
#include<ios>
using namespace std;
#include<vector>

void provjeri(string s1,string s2){

	int brojac = 0;
	size_t nPos = s1.find(s2,0);

	while(nPos != string::npos){
		brojac++;
		nPos = s1.find(s2,nPos+1);
	}
	cout << brojac;
}
