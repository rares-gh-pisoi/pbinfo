#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("proiecte.in");
ofstream fout("proiecte.out");

struct Proiect {
    int timp;
    int indice;
};

Proiect v[1001];

void sorteaDupaTimp(Proiect v[], int nrProiecte) {
    bool esteSortat = false;
    while (!esteSortat) {
        esteSortat=true;
        for(int i = 1; i<nrProiecte; i++) {
            if(v[i].timp > v[i+1].timp) {
                Proiect aux = v[i];
                v[i] = v[i+1];
                v[i + 1] = aux;

                esteSortat = false;
            }
        }
    }
}

int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i].timp;
        v[i].indice = i;
    }

    sorteaDupaTimp(v, n);
    for(int i=1;i<=n;i++){
        fout<<v[i].indice<<" ";
    }
    return 0;
}
