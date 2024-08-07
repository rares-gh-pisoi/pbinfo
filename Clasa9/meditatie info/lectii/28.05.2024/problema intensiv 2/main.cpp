#include <iostream>

using namespace std;
int a[101][101];
int main()
{
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        a[i][1]=1;
    }
    for(int j=1;j<=m;j++){
        a[1][j]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            a[i][j]=i+j;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
         a[i][1]=i;
    for(int j=2;j<=m;j++){
        a[1][j]=j;
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            a[i][j]=(a[i][j-1]+a[i-1][j])%10;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
