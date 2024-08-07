#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int aux=a[k][k-1];
    for(int i=k-1;i>1;i++){
        a[k][i]=a[k][i-1];
    }
    a[k][1]=aux;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
