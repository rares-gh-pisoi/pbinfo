#include <iostream>

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
    int cnt=0;
    for(int i=2; i<=n; i+=2) {
        for(int j=1; j<=m; j++) {
            int prim=1;
            if(a[i][j]<2) {
                prim=0;
            } else {
                for(int d=2; d*d<=a[i][j]; d++) {
                    if(a[i][j]%d==0) {
                        prim=0;
                        break;
                    }
                }
            }
            if(prim==1) {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
