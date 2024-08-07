#include <iostream>
#include <climits>
using namespace std;
int v[1000];
int main()
{
    int n;
    cin>>n;
    int vmax=INT_MIN;
    int pmax;
    int vmin=INT_MAX;
    int pmin;
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
        int aux1=v[pmax];
        v[pmax]=v[pmin];
        v[pmin]=aux1;
        int aux2=pmax;
        pmax=pmin;
        pmin=aux2;
    }
    int ok;
    do{
        ok=1;
        for(int i=pmin+1;i<pmax-1;i++){
            if(v[i]>v[i+1]){
                ok=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }while(ok==0);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
