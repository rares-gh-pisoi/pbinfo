#include <iostream>
using namespace std;
int n, a[101][101], i, j;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>a[i][j];
    for(j=1; j<=n; j++)
        a[1][j]=0;
    for(i=1; i<=n; i++)
        a[i][n]=0;
    for(j=n-1; j>=1; j--)
        a[n][j]=0;
    for(i=n-1; i>=2; i--)
        a[i][1]=0;
    for(i=1; i<=n; i++){
         for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
