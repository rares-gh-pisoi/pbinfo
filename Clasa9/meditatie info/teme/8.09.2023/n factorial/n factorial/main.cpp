#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    long long n_fact=1;
    for (int i=1; i<=n; i++) {
        n_fact*=i;
    }
    if (n_fact==0)
        cout<<1;
    cout<<n_fact;
    return 0;
}
