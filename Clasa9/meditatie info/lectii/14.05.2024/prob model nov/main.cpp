#include <iostream>

using namespace std;
int n[105][105];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=n+1;i++){
        a[i][0]=a[i][n+1]=1;
    }
    for(int j=0;j<=n+1;j++){
        a[0][j]=a[n+1][j]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==3 && a[i-1][j]!=0 && a[i][j+1]!=0 a[i+1][j]!=0 && a[i][j-1]!=0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}
