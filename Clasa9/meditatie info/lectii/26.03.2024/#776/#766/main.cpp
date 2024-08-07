#include <iostream>

using namespace std;
int a[101][101];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int cntmax=0;
    int v[n];
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=m;j++){
            if(a[i][j]%2==0){
                cnt++;
            }
        }
        if(cnt>=cntmax){
            cntmax=cnt;
            v[i]=cnt;
        }
    }
    for(int i=1;i<=n;i++){
        if(v[i]==cntmax){
            cout<<i<<" ";
        }
    }
    return 0;
}
