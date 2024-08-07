#include <iostream>
#include <climits>
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
    int j1=0,i1=0,j2,i2;
    for(int j=1;j<=m;j++){
        for(int i=1;i<=n;i++){
            if(a[i][j]==1){
                if(j1==0){
                    j1=j;
                }
                j2=j;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1){
                if(i1==0){
                    i1=i;
                }
                i2=i;
            }
        }
    }
    int cn=i2-i1+1;
    int cm=j2-j1+1;
    cout<<cn<<" "<<cm<<endl;
    for(int i=i1;i<=i2;i++){
        for(int j=j1;j<=j2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
