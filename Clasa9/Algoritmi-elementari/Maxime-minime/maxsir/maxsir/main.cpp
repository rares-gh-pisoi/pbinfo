#include <iostream>
#include <climits>
/*
Cerința
Se citește un număr n și apoi n numere naturale cu maxim 9 cifre. Știind că n este dat par, să se determine de câte ori maximul din prima jumătate apare în șir în a doua jumătate.

Date de intrare
Programul citeşte din fișierul sirmaxim.in un număr n, apoi n numere narurale.

Date de ieșire
Programul va scrie în fisierul sirmaxim.out un număr natural, reprezentând valoarea cerută.

Restricții și precizări
1 ≤ n ≤ 20
n par */
using namespace std;

int main()
{

    // se citeste numarul elementelor din sir
    int n;
    cin>>n;

    // se declara maximul din prima jumatate a sirului si numarul de aparitii cu zero
    int max_jum, ap;
    ap=0;
    max_jum=INT_MIN;

    // se citesc elementele din sir pana cand i<=n
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;

    // daca x este in prima jumatate a sirului

    if (i<=n/2){

        // daca x este mai mare ca maximul, atunci x este maximul
        if(x>max_jum){
            max_jum=x;
        }
    }else{
        // altfel,daca max_jum mai apare o data, de fiecare data cand apare se adauga 1 la contor
        if(x == max_jum){
            ap++;
        }

    }
    }

    // se afiseaza numarul de aparitii
    cout<<ap;

    return 0;
}
