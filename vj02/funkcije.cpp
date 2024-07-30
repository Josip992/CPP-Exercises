#include <iostream>
#include <algorithm>
using namespace std;
#include<vector>

void unos(vector<int>& josip,int n){
	int broj;

	for(int i=0;i<n;i++){
		cout<<"Unesite brojeve vektora: ";
		cin>>broj;
		josip.push_back(broj);
		cout<<endl;
	}
}
void ispis(vector<int> josip,int n){

	for(int i=0;i<n;i++){
		cout<<josip.at(i);
		cout<<endl;
	}

}

