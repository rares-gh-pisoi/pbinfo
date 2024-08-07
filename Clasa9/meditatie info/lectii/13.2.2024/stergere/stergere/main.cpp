#include <iostream>

using namespace std;
int v[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int i=1;
    while(i<=n){
        int prim=1;
        if(v[i]<2){
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
            for(int j=i;j<=n;j++){
                v[j]=v[j+1];
            }
            n--;
        }else{
            i++;
        }
    }
    for(i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
