#include <iostream>

using namespace std;
int a[51][51];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        int prim=1;
        for(int d=2;d<=a[4][i]/2;d++){
            if(a[4][i]%d==0){
                prim=0;
                break;
            }
        }
        if(prim==1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
