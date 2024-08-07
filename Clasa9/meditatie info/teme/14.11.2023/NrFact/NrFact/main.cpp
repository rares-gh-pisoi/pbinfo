#include <iostream>
#include <climits>
using namespace std;

int main() {
    // se citeste nr de elemente din sir
    int n;
    cin>>n;
    // se declara nr maxim de factori primi cu o valoare minima
    int fmax=INT_MIN;

    // se dcelara nr minim cu nr de factori primi cel mai mare
    int kmin=INT_MAX;

    // se citeste sirul
    for(int i=1; i<=n; i++) {

        // se citeste un element din sir
        int k;
        cin>>k;
        int s=k;

        //se declara o variabila care retine nr de factori primi al nr curent
        int kfact=0;

        // se declara cel mai mic factor prim cu 2
        int f=2;

        // se calculeaza nr de factori primi
        while(k>1) {

            // daca factorul il imparte pe nr curent exact,nr de factori al acelui creste cu 1
            if(k%f==0) {
                kfact++;
            }

            // se imparte in mod repetat nr curent la factor pana cand restul impartirii lor nu este 0
            while(k%f==0) {
                k=k/f;
            }
            f++;

            if(k>1 && f*f>k) {
                k=1;
                kfact++;
            }
        }




        // retinem nr cu nr maxim de factori primi
        if(kfact>fmax) {
            kmin=s;
            fmax=kfact;
        } else {
            if(kfact==fmax) {
                if(s<kmin) {
                    kmin=s;
                }
            }
        }

    }
    cout<<kmin;

    return 0;
}
