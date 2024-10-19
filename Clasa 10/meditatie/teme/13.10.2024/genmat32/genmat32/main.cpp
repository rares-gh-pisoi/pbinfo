#include <iostream>

using namespace std;
int a[13][13];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i][n]=1;
    }
    for(int j=1;j<=n;j++){
        a[n][j]=1;
    }
    for(int i=3;i>=1;i--){
        for(int j=3;j>=1;j--){
            a[i][j]=a[i+1][j+1]+a[i+1][j]+a[i][j+1];
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
