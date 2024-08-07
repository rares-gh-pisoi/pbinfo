#include <iostream>
#include <climits>
using namespace std;
int v[100];
int main()
{
    int n;
    cin>>n;
    int vmax=INT_MIN;
    int vmin=INT_MAX;
    int pmax,pmin;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>vmax){
            vmax=v[i];
            pmax=i;
        }
        if(v[i]<vmin){
            vmin=v[i];
            pmin=i;
        }
    }
    if(pmax<pmin){
        int aux=pmax;
        pmax=pmin;
        pmin=aux;
    }
    int ok;
    do{
        ok=1;
        for(int i=pmin;i<pmax;i++){
            if(v[i]>v[i+1]){
                ok=0;
                int p=v[i];
                v[i]=v[i+1];
                v[i+1]=p;
            }
        }
    }while(ok==0);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
