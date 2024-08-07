#include <iostream>

using namespace std;
int a[22][22];
int main()
{
    int n,m;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int sim=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n/2+1;j++){
            if(a[i][j]!=a[i][n+1-j]){
                sim=0;
                break;
            }
        }
        if(sim==0){
            break;
        }
    }
    if(sim==1){
        cout<<"DA";
    }else{
        cout<<"NU";
    }
    return 0;
}
