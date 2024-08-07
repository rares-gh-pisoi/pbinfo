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
    int pr=v[0];
    int u=v[n-1];
    int aux;
    aux=pr;
    pr=u;
    u=aux;
    int interval=1;
    for(int i=1;i<n-1;i++){
        if(v[i]<pr || v[i]>u){
            interval=0;
            break;
        }
    }
    if(interval==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
