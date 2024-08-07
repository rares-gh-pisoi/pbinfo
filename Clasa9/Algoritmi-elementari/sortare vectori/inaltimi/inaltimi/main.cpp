#include <iostream>

using namespace std;
int v[1001];
int main()
{
    int n;
    cin>>n;
    int j;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int ok;
    do{
        ok=1;
        for(int i=1;i<n;i++){
            if(v[i]>v[i+1]){
                ok=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }while(ok==0);

    for(int i=1;i<=n;i++){
        cout<<j<<" ";
    }
    return 0;
}
