#include <iostream>
using namespace std;
int cmp(int a,int b){
    if(a>b)
        return a>b;
}
int v[20001];
int poz[100000001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int cnt=1;
    for(int i=1;i<n;i++){
        if(v[i]==v[i+1]){
            poz[v[i]]=poz[v[i+1]]=cnt;
        }else{
            poz[v[i]]=cnt;
            poz[v[i+1]]=cnt+1;
        }
        cnt++;
    }
    int r,x;
    cin>>r;
    for(int i=1;i<=r;i++){
        cin>>x;
        int st=1,dr=n;
        while(st<=dr){
            int mid=(st+dr)/2;
            if(mid==poz[r]){

            }
        }
    }
    return 0;
}
