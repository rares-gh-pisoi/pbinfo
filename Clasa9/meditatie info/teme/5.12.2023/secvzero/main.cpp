#include <iostream>

using namespace std;

int main() {

    // Numarul de elemente din sir
    int n;
    cin>>n;

    // nr citit si nr citit anterior
    int ca,c;
    cin>>ca;

    // Lungimea curenta si maxima
    int lg=1;
    int lgmax=lg;

    // Indicii stanga/dreapta
    int dr=1;
    int st=1;

    // Citim toate numerele
    for(int i=2; i<=n; i++) {
        cin>>c;

        if(ca==0 && c==0) {
            // Nr curent si anterior sunt 0, marim lungime cu 1
            lg++;
        } else {
            // Nr curent si anterior NU sunt 0, lungimea este 1
            lg=1;
        }

        if(lg>lgmax) {
            lgmax=lg;
            dr=i;
            st=dr-lgmax+1;
        }

        ca=c;

    }
    cout<<st<<" "<<dr;
    return 0;
}
