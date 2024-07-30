#include<iostream>
#include<ios>
using namespace std;
#include<vector>
#include<cstring>
#include "funkcije.hpp"
#include <algorithm>
#include<time.h>

int main(){

    //Za rečenicu ”Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .”
    //Ispravna rečenica glasi: ”Ja bih, ako ikako mogu, ovu recenicu napisala ispravno.”.

    string str;

    cout<<"upisite recenicu:";
    getline(cin,str);

    cout<<str<<endl;

    str=funkcija(str);
    cout<<"Novi ispravljeni string je: "<<endl<<str<<endl;



    return 0;
}
