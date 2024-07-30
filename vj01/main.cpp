#include<iostream>
using namespace std;

//1. Napisati funkciju koja vraca referencu na neki prvi element niza koji je veci
//od nule.Koristeci povratnu vrijednost funkcije kao lvalue u main funkciji
//promijenite vrijednost tog elementa na nula.

int& funk(int a[],int n) {

    int i;

    for (i = 0; i < n;i++) {
        if (a[i] > 0) {
            return a[i];
        }

    }
}

int main() {

    int niz[]{-14,100,-3,4,5};
    int duljina=sizeof(niz)/sizeof(niz[0]);

    funk(niz,duljina)=0;
    for(int i=0;i<duljina;i++){
        cout<<niz[i]<<" ";
    }
}
