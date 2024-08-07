#include <iostream>

using namespace std;
int a[101][101];
int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<n; i++) {
        for(int j=i+1; j<=n; j++) {
            if(i!=j) {
                int aux=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=aux;
            }

        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
