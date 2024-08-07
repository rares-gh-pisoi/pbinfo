#include <iostream>

using namespace std;
int a[100][100];
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i>j) {
                a[i][j]=j*2;
            } else {
                a[i][j]=i*2;
            }
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
        return 0;
}
