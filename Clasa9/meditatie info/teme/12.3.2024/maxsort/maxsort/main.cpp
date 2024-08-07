#include <iostream>
#include<climits>
using namespace std;
int v[1000];
int main()
{
    int n;
    cin>>n;
    int vmax=INT_MIN;
    int pozmax,i;
    for(i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>vmax){
            vmax=v[i];
            pozmax=i;
        }
    }
    int ver1,ver2;
    do{
        ver1=1;
        for(i=0;i<pozmax-1;i++){
            if(v[i]>v[i+1]){
                ver1=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }while(ver1==0);

    do{
        ver2=1;
        for(i=pozmax+1;i<n-1;i++){
            if(v[i]<v[i+1]){
                ver2=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }while(ver2==0);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
