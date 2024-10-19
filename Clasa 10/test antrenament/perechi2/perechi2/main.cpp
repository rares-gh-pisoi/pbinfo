#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // Deschidem fișierul de intrare
    ifstream fin("perechi.in");
    ll k;
    fin >> k;
    fin.close();

    ll count = 0;

    // Calculăm rădăcina pătrată a lui k pentru a limita căutarea
    ll sqrtk = floor(sqrt((double)k));

    for(ll d1 = 1; d1 <= sqrtk; ++d1){
        if(k % d1 == 0){
            ll d2 = k / d1;
            if(d2 > d1){
                if( (d1 + d2) % 2 == 0 ){
                    count++;
                }
            }
        }
    }

    // Scriem rezultatul în fișierul de ieșire
    ofstream fout("perechi.out");
    fout << count;
    fout.close();
}

