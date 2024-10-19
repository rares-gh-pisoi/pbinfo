#include <iostream>
#include <climits>
using namespace std;
int v[101];
int a[101][101];
int x[101];
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
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int j=1;j<=n;j++){
        int cmin=INT_MAX;
        for(int i=1;i<=m;i++){
            if(a[i][j]<cmin && a[i][j]!=-1){
                cmin=a[i][j];
            }
        }
        x[j]=cmin;
    }
    int s=0;
    for(int i=1;i<=n;i++){
        s=s+v[i]*x[i];
    }
    cout<<s;
    return 0;
}
