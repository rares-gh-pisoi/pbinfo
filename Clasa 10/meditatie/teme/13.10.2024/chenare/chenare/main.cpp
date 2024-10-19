#include <iostream>

using namespace std;
int a[51][51];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        for(int k=1;k<=n+1-i;k++){
            a[i][k]=i;
        }
        for(int k=i+1;k<=n+1-i;k++){
            a[k][n+i-1]=i;
        }
        for(int k=n-i;k>=i;k--){
            a[n+1-i][k]=i;
        }
        for(int k=n-i;k>=i+1;k--){
            a[k][i]=i;
        }
    }
    if(n%2==1){
        a[n/2+1][n/2+1]=n/2+1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
