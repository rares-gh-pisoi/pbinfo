#include <iostream>

using namespace std;
int a[16][16];
int main()
{
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
        a[1][j]=1+j;
    }
    for(int i=2;i<=n;i++){
        a[i][n]=i+n;
    }
    for(int j=n-1;j>=1;j--){
        a[n][j]=n+j;
    }
    for(int i=n-1;i>=2;i--){
        a[i][1]=i+1;
    }
    for(int j=n-1;j>=2;j--){
        for(int i=n-1;i>=2;i--){
            a[i][j]=a[i-1][j+1]+a[i][j+1]+a[i+1][j+1];
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
