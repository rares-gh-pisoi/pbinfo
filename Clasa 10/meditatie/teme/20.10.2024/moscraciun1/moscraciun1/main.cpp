#include <iostream>
#include <algorithm>
using namespace std;
int v[1001];
int main()
{
    int n,b;
    cin>>n>>b;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(v+1,v+n+1);
    int cnt=0;
    for(int i=1;i<=n && v[i]<=b;i++){
        cnt++;
        b-=v[i];
    }
    cout<<cnt<<" ";
    if(cnt==n){
        cout<<0;
    }else{
        cout<<v[cnt+1]-b;
    }
    return 0;
}
