/******************************************************************************
3. Napisati funkciju koja vraca niz int vrijednosti velicine n u kojem je svaki
element zbroj svoja dva prethodnika. Prvi i drugi element u nizu su jedinice.
U main funkciji ispisati dobiveni niz i osloboditi memoriju.

*******************************************************************************/

#include<iostream>
using namespace std;


int* unos(int niz[],int n) {

    niz[0]=1;
    niz[1]=1;

    for(int i=2;i<n;i++)
    {
        niz[i]=niz[i-1]+niz[i-2];
    }
    return niz;

}

int main() {
        int n=10;
        int niz[n];
        int* noviniz;

        noviniz=unos(niz,n);

        for(int i=0;i<n;i++)
        {
            cout<<noviniz[i]<<" ";
        }

}

