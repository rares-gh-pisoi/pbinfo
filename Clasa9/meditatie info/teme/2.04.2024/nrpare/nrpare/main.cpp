#include <iostream>

using namespace std;
int v[101][101];
int ap[101];
int main()
{
    int n,m;
    cin>>n>>m;
    int emax=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(v[i][j]%2==0){
                ap[i]++;
            }
        }
        if(ap[i]>emax){
            emax=ap[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(ap[i]==emax){
            cout<<i<<" ";
        }
    }
    return 0;
}
