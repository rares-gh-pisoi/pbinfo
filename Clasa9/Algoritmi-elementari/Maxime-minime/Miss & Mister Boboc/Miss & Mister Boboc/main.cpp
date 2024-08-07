#include <iostream>
#include <climits>
/*
Cerinţa
La concursul “Miss & Mister Boboc” participă n perechi de elevi, despre fiecare elev cunoscându-se înălțimea. Numim grad de disproporționalitate al unei perechi diferența în valoare absolută dintre înălțimile elevilor care formează perechea.

Să se determine numărul de ordine al perechii cu grad de disproporționalitate minim.

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n perechi de numere naturale, separate prin spaţii, reprezentând înălțimile elevilor dintr-o pereche.

Date de ieşire
Programul afișează pe ecran numărul de ordine al perechii cu grad de disproporționalitate minim. Dacă există mai multe perechi cu grad minim de disproporționalitate, se va afișa numărul de ordine al ultimei perechi

Restricţii şi precizări
1 ≤ n ≤ 1000
perechile de elevi sunt numerotate de la 1 la n
înălțimile elevilor sunt numere naturale cuprinse între 1 și 1000 – unitatea de măsură folosită este de origine extraterestră, nu încercați să o înțelegeți !!
*/
using namespace std;
int h,w;
int main() {
    char x;
    cin>>h>>w;
    cout<<(char)201;
    int i;
    for(i=1;i<=w;i++){
        cout<<(char)205;
    }
    cout<<(char)187<<"\n";

    for(int linie=1;linie<=h;linie++) {
        cout<<(char)186;
        for(int j=1;j<=w;j++){
            cout<<" ";
        }
        cout<<(char)186<<"\n";
     }

    cout<<(char)200;

    for(i=1;i<=w;i++){
        cout<<(char)205;
    }
    cout<<(char)188<<"\n";




}



