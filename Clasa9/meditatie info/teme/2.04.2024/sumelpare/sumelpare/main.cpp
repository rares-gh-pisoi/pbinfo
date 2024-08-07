#include <iostream>

using namespace std;
int v[101][101];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>v[i][j];
        }
    }
    int nrc;
    int smax;
    for(int i=1;i<=n;i++){
        int s=0;
        for(int j=1;j<=m;j++){
            if(v[i][j]%2==0){
                s+=v[i][j];
            }
        }
        if(s>smax){
            smax=s;
            nrc=i;
        }
    }
    cout<<nrc;
    return 0;
}
