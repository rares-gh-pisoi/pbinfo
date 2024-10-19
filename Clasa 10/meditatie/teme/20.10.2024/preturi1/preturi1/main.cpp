#include <iostream>
#include <climits>
using namespace std;
int v[101];
int a[101][101];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;i<=n;j++){
            cin>>a[i][j];
        }
    }
    int smin=INT_MAX;
    for(int i=1;i<=m;i++){
        int s=0;
        int ok=1;
        for(int j=1;j<=n;j++){
            if(a[i][j]==-1){
                ok=0;
                break;
            }else{
                s=s+a[i][j]*v[j];
            }
        }
        if(ok==1){
            if(s<smin){
                smin=s;
            }
        }
    }
    cout<<smin;
    return 0;
}
