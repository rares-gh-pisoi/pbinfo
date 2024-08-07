#include <iostream>

using namespace std;
int a[21][21];
int ap[21];
int main()
{
    int n,m;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<n;i++){
        int aux=a[1][i];
        for(int j=2;j<=m;j++){
            if(aux==a[j][m]){
                ap[a[i][j]]=1;
            }
        }
    }
    for(int i=0;i<21;i++){
        if(ap[i]==1){
            cout<<i<<" ";
        }
    }
    return 0;
}
