#include <iostream>

using namespace std;

int main() {

    // citim n
    int n;
    cin>>n;

    // declaram suma
    long long s=0;


    // citim cele n numere naturale
    for (int i=1; i<=n; i++) {
        // citim un numar
        int k;
        cin>>k;

        // determinam daca este prim
        int prim = 1;
        if (k == 1) {
            prim = 0;
        } else {
            for (int d=2; d*d<=k; d++) {
                if(k%d==0) {
                    prim=0;
                    break;
                }
            }
        }


        // daca este prim, adaugam la suma
        if (prim==1) {
            s+=k;
        }
    }

    // afisam suma
    cout<<s;
}
