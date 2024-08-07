#include <iostream>
#include <climits>
using namespace std;
int a[21][21];
int main()
{
    int m,n;
    cin>>m>>n;
    int smax=INT_MIN;
    for(int i=1; i<=m; i++) {
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            int s=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
            if(s>smax){
                smax=s;
            }
        }
    }
    cout<<smax;
    return 0;
}
