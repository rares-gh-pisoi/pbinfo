#include <iostream>

using namespace std;
int a[102][102];
int main()
{
    int n;
    cin>>n;
    a[n/2+1][1]=1;
    int st=n/2+1;
    int dr=n/2+1;
    for(int j=2;j<=n/2+1;j++){
        st--;
        dr++;
        for(int i=st;i<=dr;i++){
            a[i][j]=a[i][j-1]+1;
            a[i][n-j+1]=a[i][j];
        }
    }
  a[n/2+1][n]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
