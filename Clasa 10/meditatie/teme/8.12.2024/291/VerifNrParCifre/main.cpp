#include <iostream>

using namespace std;
int v[101];
int nrcifre(int n){
    int nrc=0;
    while(n!=0){
        nrc++;
        n/=10;
    }
    return nrc;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        if(nrcifre(v[i])%2==1){
            cout<<"NU";
            return 0;
        }
    }
    cout<<"DA";
    return 0;
}
