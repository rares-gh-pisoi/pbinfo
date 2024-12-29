#include <iostream>

using namespace std;
int v[100001],n,A;
int verificare(int L){
    long long s=0;
    for(int i=1;i<=n;i++){
        s+=v[i]/L;
    }
    return (s>=L);
}
int main()
{
    cin>>n>>A;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int H=0,st=1,dr=30000,mid;
    while(st<=dr){
        mid=(st+dr)/2;
        if(verificare(mid)){
            H=mid;
            st=mid+1;
        }else{
            dr=mid-1;
        }
    }
    cout<<H;
    return 0;
}
