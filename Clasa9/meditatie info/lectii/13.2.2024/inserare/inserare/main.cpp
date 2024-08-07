#include <iostream>

using namespace std;
int v[26];
int main()
{
    int n,x,p;
    cin>>n>>x>>p;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=n;i>=p;i--){
        v[i+1]=v[i];
    }
    v[p]=x;
    n++;
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
