#include <iostream>

using namespace std;
int a[101][101];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        a[i][i]=k*i;
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            a[i][j]=a[i][j-1]+1;
        }
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            a[i][j]=a[i-1][j]+2;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
