#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zone.in");
ofstream fout("zone.out");
int v[300];
int main() {
    int n;
    fin>>n;
    int poz1=-1;
    int poz2=-1;

    // Citim elementele
    for(int i = 0 ; i < 3 * n ; i++) {
        fin >> v[i];
    }

    // Gasim indexul primei pozitii pare
    for(int i=0; i<n; i++) {
        if(v[i]%2==0) {
            poz1=i;
            break;
        }
    }

    // Gasim indexul ultimei pozitii impare
    for(int i=2*n; i<3*n; i++) {
        if(v[i]%2==1) {
            poz2=i;
        }

    }

    if(poz1!=-1 && poz2!=-1) {
        int aux;
        aux=v[poz1];
        v[poz1]=v[poz2];
        v[poz2]=aux;
    }

    for(int i=0; i<3*n; i++) {
        fout<<v[i]<<" ";
    }
    return 0;
}
