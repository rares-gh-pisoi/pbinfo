#include <iostream>

using namespace std;
int v[100001];
long long s[100001];
int main() {
    int n,m,x,y;
    cin>>n;
    s[0]=0;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    cin>>m;
    long long smax=-1000000000000000000;
    for(int i=1; i<=m; i++) {
        cin>>x>>y;
        long long sum=0;
        if(x>y)
            swap(x,y);
        sum=s[y]-s[x-1];
        if(sum>smax){
            smax=sum;
        }
    }
    cout<<smax;
    return 0;
}
