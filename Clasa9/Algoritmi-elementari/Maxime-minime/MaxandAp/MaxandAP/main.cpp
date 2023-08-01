#include <iostream>
#include <climits>
using namespace std;

/*
Cerinţa
Să se scrie un program care citește un șir de n numere naturale şi determină valoarea maximă din șir
și de câte ori apare.

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere naturale nenule.

Date de ieşire
Programul afișează pe ecran numerele max ap, reprezentând valoarea maximă din șir, respectiv numărul de apariții ale acesteia, separate prin exact un spaţiu.

Restricţii şi precizări
1 ≤ n ≤ 1000
cele n numere citite vor fi mai mici decât 231
*/

int main() {
    // citim numarul de numere din sir
    int n;
    cin>>n;

    // Se declara valoarea maxima si numarul de aparitii
    int max,ap;
    max = INT_MIN;
    ap = 1;

    // citim de n ori numerele din sir folosind structura repetitiva for
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;

        // daca x este mai mare ca maximul, atunci max=x si numarul de aparitii este egal cu 1
        if(x > max) {
            max=x;
            ap=1;
        } else if (x == max) {
            // daca l-am mai intalnit o data, se adauga de fiecare data 1 la numarul de aparitii
            ap++;
        }
    }

    // se afiseaza maximul si numarul de aparitii
    cout<<max<<" "<<ap;
    return 0;
}
