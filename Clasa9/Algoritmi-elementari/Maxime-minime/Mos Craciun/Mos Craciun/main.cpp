#include <iostream>
#include<climits>
/*
Cerința
Cei n copii de la grădiniță stau cuminți în șir și așteaptă cadourile de la Moș Crăciun. Ei sunt numerotați de la 1 la n (se consideră că n este par) și în prima jumătate sunt copiii de la grupa mare iar în a doua jumătate sunt cei de la grupa mică (numărul de copii din fiecare grupă este același, n/2). După ce trece Moș Crăciun se știe câte cadouri a primit fiecare copil și noi dorim să aflăm câți copii din grupa mică au primit mai multe cadouri decât orice copil din grupa mare.

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spații, reprezentând, în ordine, numărul de cadouri ale fiecărui copil.

Date de ieșire
Programul va afișa pe ecran numărul c, valoarea cerută.

Restricții și precizări
2 ≤ n ≤ 20, par
cele n numere citite vor fi naturale nenule mai mici decât 1.000.000.000 */
using namespace std;

int main() {
    // se citeste numarul de copii
    int n;
    cin>>n;

    // se declara maximul din grupa mare si contorul, reprezentand nr copii grupa mica care au mai multe cadouri decat orice copil din grupa mare
    int max_mare, cnt;
    cnt=0;
    max_mare=INT_MIN;

    // se citeste numarul de cadouri care il are fiecare copil
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;

        // daca i este in prima jumatate
        if(i<=n/2) {
            // daca un copil din grupa mare are mai mult decat maximul, atunci el are cele mai multe cadouri din grupa
            if(x>max_mare) {
                max_mare=x;
            }

            // altfel, daca un copil din grupa mica are mai multe cadouri decat maximul din grupa mare, atunci de fiecare data cand un copil are mai multe cadouri decat maximul se adauga 1 la numarul de copii
        } else {
            if(x>max_mare) {
                cnt++;
            }

        }

    }

    // se afiseaza numarul de copii care au mai multe cadouri decat maximul din grupa mare
    cout<<cnt;
    return 0;
}
