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
void sortiranje(vector<int> &josip,int n){
	int zbroj=0;

	sort(josip.begin(),josip.end());
	sort(josip.begin(),josip.end());

	for(int i=0;i<n;i++){
		zbroj+=josip.at(i);
	}

	josip.insert(josip.begin(),0);
	josip.push_back(zbroj);
}
void ispis(vector<int> josip,int n){

	for(int i=0;i<n;i++){
		cout<<josip.at(i);
		cout<<endl;
	}

}
