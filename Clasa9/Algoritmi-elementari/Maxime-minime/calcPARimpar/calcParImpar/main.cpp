#include <iostream>
#include <climits>
using namespace std;

/*
Cerința
Se dau n numere naturale. Considerăm poziţiile lor numerotate de la 1 la n.
Să se determine cea mai mare valoare memorată pe o poziţie pară şi cea mai mică valoare
de două cifre aflată pe o poziţie impară.

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spații.

Date de ieșire
Programul va afișa pe ecran numerele x şi y, pe același rând și separate prin spațiu, reprezentând, în ordine, cele două valori calculate.
În cazul în care nu sunt valori de două cifre pe poziții impare se va afișa -1 în contul valorii y.

Restricții și precizări
2 ≤ n ≤ 20
cele n numere citite vor fi mai mici decât 1.000.000.000
Exemplu:
*/
int main() {
    // se citeste n
    int n;
    cin>>n;
    int x,y;
    x=INT_MIN;
    y=INT_MAX;

    for(int i=1; i<=n; i++) {
        int p;
        cin>>p;

        // daca pozitia este para
        if(i%2 == 0) {

            // daca p este mai mare ca maximul,atunci p este maximul
            if(p>x) {
                x=p;
            }
        } else {
            // pozitia este impara

            // daca y este de doua cifre si este minim, atunci y=p
            int c = p/10;

            if(0<c && c<10 && p<y) {
                y=p;
            }
        }

    }

    if (y == INT_MAX) {
        y = -1;
    }

    // se afiseaza numerele cautate
    cout<<x<<" "<<y;

    return 0;
}
