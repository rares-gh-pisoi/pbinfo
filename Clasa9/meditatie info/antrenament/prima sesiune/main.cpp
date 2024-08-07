#include <iostream>
#include <climits>
using namespace std;
int v[100001];
int main() {
    int n,maxim,sol;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }
    sol=INT_MIN;
    maxim = v[1];
    for (int i=2;i<=n;i++) {
        /// i = 4
        if (maxim - v[i] > sol)
            sol = maxim - v[i];
        if (v[i] > maxim)
            maxim = v[i];
    }
    cout<<sol;
    return 0;
}
