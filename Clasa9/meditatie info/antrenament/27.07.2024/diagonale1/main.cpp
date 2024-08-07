#include <iostream>

using namespace std;
int a[101][101];
int main()
{
    int n,s;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    s=0;
    for(int i=2;i<=n;i++){
        s+=a[i][i-1];
    }
    for(int i=1;i<n;i++){
        s+=a[i][i+1];
    }
    cout<<s;
    return 0;
}
