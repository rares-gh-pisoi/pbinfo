#include <iostream>

using namespace std;
int v[50001];
int g[50001];
int main()
{
    int n,m,p;
    cin>>n>>p;
    long long c=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v[x]++;
    }
    cin>>m;
    for(int j=1;j<=m;j++){
        int x;
        cin>>x;
        g[x]++;
    }
    /// contorizam cate nr apar din ambii vectori si nr lor de aparitii

    for(int i=0;i<10000;i++){
        for(int j=0;j<10000 && i*j<p;j++){
            c+=v[i]*g[j];
        }
    }
    /// se aduna la c produsul frecventelor ambelor numere curente
    cout<<c;
    return 0;
}
