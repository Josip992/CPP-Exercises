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
