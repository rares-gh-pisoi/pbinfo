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
    for(int i=1;i<k;i++){
        int aux=a[i][k];
        a[i][k]=a[k][i];
        a[k][i]=aux;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
