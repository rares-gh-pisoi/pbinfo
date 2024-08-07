#include <iostream>

using namespace std;
int v[1501];
int main()
{
    int n,p;
    cin>>n>>p;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=p;i<n;i++){
        v[i]=v[i+1];
    }
    n--;
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
