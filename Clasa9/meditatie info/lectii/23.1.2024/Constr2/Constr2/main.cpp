#include <iostream>

using namespace std;
int v[201],y[201];
int main() {
    int n,k;
    cin>>n;
    k=0;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }
    for(int i=n; i>=1; i--) {
        int prim=1;
        for(int d=2; d*d<=v[i]; d++) {
            if(v[i]%d==0) {
                prim=0;
                break;
            }
        }
        if(prim==1 && v[i]>1) {
            k++;
            y[k]=v[i];
        }
    }
    for(int i=1;i<=k;i++){
        cout<<y[i]<<" ";
    }
        return 0;
}
