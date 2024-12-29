#include <iostream>
#include <algorithm>
using namespace std;
int cmp(int n,int m) {
    if(n>m)
        return 1;
    else
        return 0;
}
int v[101];
int main() {
    int n,m;
    cin>>n>>m;
    int s=0;
    for(int i=1; i<=m; i++) {
        cin>>v[i];
        s+=v[i];
    }
    if(s<n) {
        cout<<"imposibil";
    } else {
        sort(v+1,v+m+1,cmp);
        int cnt=0;
        for(int i=1; i<=m;i++) {
            if(n>=v[i]) {
                cnt++;
                n-=v[i];
            } else if(n<v[i] && n!=0) {
                cnt++;
                break;
            }
        }
        cout<<cnt;
    }
    return 0;
}
