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
        cout<<v[i]<<" ";
    }
    return 0;
}
