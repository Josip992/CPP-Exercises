#include<iostream>
#include<ios>
using namespace std;
#include<vector>
#include<cstring>
#include <algorithm>

string funkcija(string str){

    string::iterator it;
    for(it = str.begin(); it != str.end();it++){
        if(*it == ('.')){
            if(*(it-1) == ' '){
                it = str.erase(it-1);
                if(it == str.end())
                    break;
            }
        }
        if(*it == ','|| *it == ';'||*it == ':'||*it == '?'||*it == '!'){
            if(*(it-1) == ' '){
                str.erase(it-1);
            }
            if(*(it+1) != ' '){
                str.insert(it, ' ') + 1;
            }
        }
    }return str;
}

