#include <iostream>

using namespace std;
int v[1000],n,i;
int main()
{
    cin>>n;
    int poz;
    for(int i=0;i<n;i++){
        cin>>v[i];
        int prim=1;
        for(int d=2;d*d<=v[i];d++){
            if(v[i]%d==0){
                prim=0;
                break;
            }
        }
        if(prim==1){
            poz=i;
        }
    }
    for(int i=0;i<n;i++){
        if(i==poz){
            cout<<0<<" ";
        }else{
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
