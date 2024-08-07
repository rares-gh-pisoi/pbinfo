#include <iostream>

using namespace std;
int v[1000],x[1000];
int main()
{
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    for(int f=0;f<k;f++){
        cin>>x[f];
    }
    for(int f=0;f<k;f++){
        int nr=x[f];
        int ok=0;
        for(int i=0;i<n;i++){
            if(v[i]==nr){
                ok=1;
                break;
            }
        }
        if(ok==0){
            cout<<0<<" ";
        }else{
            cout<<1<<" ";
        }
    }
    return 0;
}
