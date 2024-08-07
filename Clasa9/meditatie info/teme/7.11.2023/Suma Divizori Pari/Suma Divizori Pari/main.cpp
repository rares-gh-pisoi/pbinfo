#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin>>n;

    long long s=0;
    for (d=2; d*d<n; d++) {
        // Verific ca este divizor
        if (n%d==0) {
            if(d%2==0) {
                s+=d;
            }

            int d2 = n/d;
            if(d2%2==0) {
                s=s+d2;
            }
        }
    }

    if (d*d == n) {
        s+=d;
    }

    if (n>1 && n%2==0) {
        s+=n;
    }
    cout<<s;
    return 0;

}
