#include <iostream>

using namespace std;
int a[105][105];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int j=0;j<=m+1;j++){
        a[0][j]=0;
        a[n+1][j]=0;
    }
    for(int i=0;i<=n+1;i++){
        a[i][0]=0;
        a[i][m+1]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1][j]%2==0 && a[i][j+1]%2==0 && a[i+1][j]%2==0 && a[i][j-1]%2==0){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
