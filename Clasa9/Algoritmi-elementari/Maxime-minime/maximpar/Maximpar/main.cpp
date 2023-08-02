#include<iostream>
#include<climits>
/*
Cerința
Se dau n numere naturale. Determinați cel mai mare număr par introdus și numărul său de apariții.

Date de intrare
Fișierul de intrare maximpar.in conține pe prima linie numărul n, iar pe a doua linie n numere naturale separate prin spații.

Date de ieșire
Fișierul de ieșire maximpar.out va conține pe prima linie numerele maxim si apare, reprezentând maximul par dintre numerele de pe a doua linie a fișierului de intrare și aparițiile acestuia, dacă fișierul de intrare conține cel puțin un număr par, respectiv -1, în caz contrar.

Restricții și precizări
1 ≤ n ≤ 200

numerele de pe a doua linie a fișierului de intrare vor fi mai mici decât 1.000*/
using namespace std;

int main() {
    //se citeste n
    int n;
    cin>>n;
    int apare;

    // initializam pe max cu valoarea minima, iar numarul de aparitii cu 0
    int maxim;
    maxim=INT_MIN;
    apare=0;

    //Se citesc n numere pana cand i=n

    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;

        // Daca x este par si este mai mare decat maximul,atunci x este maximul si apare o data
        if(x%2 == 0) {
            if(x>maxim) {
                maxim=x;
                apare=1;
            }
           else
                if (x == maxim)
                apare++;
        }
    }
    // se afiseaza maximul si numarul de aparitii
    if(maxim>=0)
        cout<<maxim<<" "<<apare;
    else
        cout<<-1;

    return 0;
}
