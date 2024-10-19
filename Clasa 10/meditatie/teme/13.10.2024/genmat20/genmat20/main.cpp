#include <iostream>

using namespace std;
int a[16][16];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i][n-i+1]=n;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            a[i][j]=i+j-1;
        }
    }
    for(int i=2;i<=n;i++){
        int nr=1;
        for(int j=n+2-i;j<=n;j++){
            a[i][j]=nr;
            nr++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
