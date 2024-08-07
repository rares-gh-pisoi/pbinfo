#include <iostream>

using namespace std;
int a[101][101];
int main() {
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(a[i][j]<0) {
                cnt++;
                cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<endl;
            }
        }
    }
    if(cnt==0) {
        cout<<"nu exista";
    } else {
        cout<<cnt;
    }
    return 0;
}
