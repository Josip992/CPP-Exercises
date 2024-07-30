#include<iostream>
#include<ios>
using namespace std;
#include<vector>
#include<cstring>
#include <algorithm>
#include<time.h>

void funkcija(vector <string>& str){

	string s;
	vector<string>::iterator it;

	cout<<"Unesite stringove: "<<endl;
	cout<<"Za prekid prisnite ctrl + z i enter: "<<endl;
	while(cin >> s){
		str.push_back(s);
	}
	for(it = str.begin();it != str.end();it++){
		reverse((*it).begin(),(*it).end());
		sort(str.begin(),str.end());
	}
	for(it = str.begin();it != str.end();it++){
		cout<<*it<< " ";
	}

}
