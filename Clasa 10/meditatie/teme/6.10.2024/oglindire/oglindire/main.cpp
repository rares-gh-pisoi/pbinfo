#include <iostream>
int primnr(int n) {
    int prim=1;
    if(n<2) {
        return 0;
    } else {
        for(int d=2; d*d<=n; d++) {
            if(n%d==0){
                prim=0;
                break;
            }
        }
    }
    return prim;
}
using namespace std;
int a[101][101];
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++) {
        if(primnr(a[i][1])){
            for(int j=1;j<=m/2;j++){
                swap(a[i][j],a[i][m-j+1]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
