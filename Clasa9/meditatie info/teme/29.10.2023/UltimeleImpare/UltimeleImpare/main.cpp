#include <iostream>
using namespace std;

int main() {
    int n,k,p,u;
    cin>>n;
    u=0;
    p=0;
    for (int i=1; i<=n; i++) {
        cin>>k;
        if (k%2==1) {
            p=u;
            u=k;
        }
    }
    if (u==0 || p==0) {
        cout<<"Numere insuficiente";
    } else {
        cout<<p<<" "<<u;
    }
    return 0;
}
