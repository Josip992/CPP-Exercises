ZD1
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
///////////////////////////////////////////////////
ZD2
#include<iostream>
using namespace std;


int* unos(int niz[],int n) {
    
    for(int i=0;i<n;i++){
        cin>>niz[i];
    }
    
    return niz;
  
}
void ispis(int niz[],int n){
    
    for(int i=0;i<n;i++){
        cout<<niz[i]<<" ";
    }
}
/*
0 1 2 3 4 5 6

1 2 3 2 5 6 7
1 2 3 2 5 6 7
*/
int* funk(int niz[],int n,int* brEl){
   
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;i<n;j++)
        {
            if(niz[i]==niz[j])
            {
                for(int k=j;k<n;k++)
                {
                    niz[k]=niz[k+1];
                
                }
                n=n-1;
                 
            }
        }
    }
     *brEl=n;
     
      
    for(int i=0;i<*brEl;i++){
        cout<<niz[i]<<" ";
    }
    
    return niz;
}


int main() {
    
    int n;
    cout<<"Unesite inicijalni broj el. niza: "<<endl;
    cin>>n;
    
    int* niz=new int[n];
    int brEl=0;
    
    niz=unos(niz,n);
    niz=funk(niz,n,&brEl);
    //ispis(niz,brEl);
        

}
//////////////////////////////////////////////////////////////
ZD3
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
////////////////////////////////////////
ZD4
u fileovima u mailu(main(1).cpp, vector.cpp,vector.hpp)
