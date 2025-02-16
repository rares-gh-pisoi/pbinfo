#include <iostream>
#include <algorithm>
using namespace std;
int v[1001];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=k;i++){
        for(int j=i;j<=n;j+=k){
            for(int l=j+k;l<=n;l+=k){
                if(v[j]>v[l])
                    swap(v[j],v[l]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
