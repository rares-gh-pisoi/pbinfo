#include <iostream>
#include <algorithm>
using namespace std;
int v[1001];
int main()
{
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    cin>>k;
    sort(v+1,v+n+1);
    for(int i=1;i<=k;i++){
        v[i]*=-1;
    }
    int s=0;
    for(int i=1;i<=n;i++){
        s+=v[i];
    }
    cout<<s;
    return 0;
}
