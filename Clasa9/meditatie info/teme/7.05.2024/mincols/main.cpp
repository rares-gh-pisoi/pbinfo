#include <iostream>
#include <climits>
using namespace std;
int a[21][21];
int ap[21];
int main() {
    int m,n;
    cin>>m>>n;
    int valmin=INT_MAX;
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            cin>>a[i][j];
            if(a[i][j]<valmin) {
                valmin=a[i][j];
            }
        }
    }
    for(int j=1; j<=n; j++) {
        for(int i=1; i<=m; i++) {
            if(a[i][j]==valmin) {
                ap[j]=1;
                break;
            }
        }
    }
    for(int j=1; j<=n; j++) {
        if(ap[j]==1) {
            for(int i=1; i<=m;i++) {
                a[i][j]=valmin;
            }
        }

    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
