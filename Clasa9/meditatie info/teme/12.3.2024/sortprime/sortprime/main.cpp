#include <iostream>

using namespace std;
int v[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ok;
    do{
        ok=1;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                ok=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }while(ok==0);

    for(int i=0;i<n;i++){
        int prim=1;
        if(v[i]==0 || v[i]==1){
            prim=0;
        }else{
            for(int d=2;d*d<=v[i];d++){
                if(v[i]%d==0){
                    prim=0;
                    break;
                }
            }
        }
        if(prim==1){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
