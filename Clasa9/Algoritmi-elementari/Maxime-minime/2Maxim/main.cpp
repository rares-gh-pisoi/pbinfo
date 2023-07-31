#include <iostream>
#include <climits>

using namespace std;
/*
Cerinţa
Să se scrie un program care citește un șir de n numere naturale şi determină cele mai mari două numere din şir.

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere naturale nenule.

Date de ieşire
Programul afișează pe ecran numerele x y, reprezentând valorile cerute, separate prin exact un spaţiu.

Restricţii şi precizări
2 ≤ n ≤ 1000
cele n numere citite vor fi mai mici decât 2.000.000.000
valorile afişate respectă relaţia x ≥ y
*/

int main() {

    // Declaram si citim numarul de elemente din sir
    int n;
    cin >> n;

    // Declaram 2 variabile pentru maxime, x, y
    int x, y;
    x= INT_MIN;
    y = INT_MIN;

    // citim elementele din sir cu structura repetitiva for
    for(int i = 1; i<=n;i++) {
        // citim un numar de la tastatura - nrc
        int nrc;
        cin >> nrc;

        // daca nr curent este mai mare ca y
        if (nrc > y) {
            x = y;
            y = nrc;

        } else if (nrc > x) {
            // daca nr curent este mai mare ca x
            x = nrc;
        }

    }

    // afisam y si x
    cout << y << " " << x;
    return 0;
}
