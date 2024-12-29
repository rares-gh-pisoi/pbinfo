#include <iostream>
#include <algorithm>
using namespace std;
int ap[10];
int ap2[10];
int v[101];
int main() {
    int n,x;
    cin>>n;
    int frmin=8,frmax=-1,cnt=0;
    for(int i=1; i<=n; i++) {
        cin>>x;
        int cx=x,st=0;
        while(cx!=0) {
            ap[cx%10]++;
            if(ap2[cx%10]==0){
                st++;
                ap2[cx%10]=1;
            }
            cx/=10;
        }
        if(st==2){
            cnt++;
            v[i]=x;
        }
        for(int i=0;i<=9;i++){
            ap2[i]=0;
        }
    }
    int nrc;
    for(int i=0;i<=9;i++){
        if(ap[i]<frmin){
            frmin=ap[i];
            nrc=i;
        }
        if(ap[i]>frmax)
            frmax=ap[i];
    }
    cout<<nrc<<"\n";
    for(int i=frmax;i>=0;i--){
        for(int j=9;j>=0;j--){
            if(ap[j]==i)
                cout<<j<<" ";
        }
    }
    cout<<"\n";
    if(cnt==0)
        cout<<"-1";
    else{
        sort(v+1,v+cnt+1);
        for(int i=1;i<=cnt;i++){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
