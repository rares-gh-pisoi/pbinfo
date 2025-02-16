#include <iostream>

using namespace std;
int v[1001],a[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int k=0;
    for(int i=1;i<=n;i++){
        if(v[i]%2==0){
            a[++k]=v[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(v[i]%2==1){
            a[++k]=v[i];
        }
    }
    int ok;
    do{
        ok=1;
        for(int i=1;i<n/2;i++){
            if(a[i]>a[i+1]){
                ok=0;
                swap(a[i],a[i+1]);
            }
        }
    }while(ok==0);
    do{
        ok=1;
        for(int i=n/2+1;i<n;i++){
            if(a[i]>a[i+1]){
                ok=0;
                swap(a[i],a[i+1]);
            }
        }
    }while(ok==0);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
