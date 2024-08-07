#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin>>n;
    int par=-1;
    for (int i=1; i<=n; i++) {
        cin>>k;
        if (k%2==0) {
            par=k;
        }

    }
    if (par==-1) {
        cout<<"IMPOSIBIL";
    } else {
        cout<<par;
    }
    return 0;
}
