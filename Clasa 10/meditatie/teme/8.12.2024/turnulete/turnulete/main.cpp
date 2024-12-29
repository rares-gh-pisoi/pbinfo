#include <iostream>

using namespace std;
int v[100001],n;
int cbst(int n) {
    int st=1,dr=n,poz=0;
    while(st<=dr) {
        int mid=(st+(dr-st))/2;
        if(v[mid]>=n) {
            poz=mid;
            dr=mid-1;
        }else{
            st=mid+1;
        }
    }
    return poz;
}
int cbdr(int n) {
    int st=1,dr=n,poz=0;
    while(st<=dr) {
        int mid=(st+(dr-st))/2;
        if(v[mid]<=n) {
            poz=mid;
            st=mid+1;
        }else{
            dr=mid-1;
        }
    }
    return poz;
}
int main() {
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }
    int r,x;
    cin>>r;
    for(int i=1;i<=r; i++) {
        cin>>x;
        if(cbst(x)==0){
            cout<<0<<" ";
        }else{
            cout<<1LL*x*(cbdr(x)-cbst(x)+1)<<" ";
        }
    }
    return 0;
}
