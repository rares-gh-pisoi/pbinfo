#include <iostream>

using namespace std;
int a[22][22];
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int sim=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<n/2+1;j++){
            if(a[i][j]!=a[i][n-j+1]){
                sim=0;
                break;
            }
        }
        if(sim==0){
            break;
        }
    }
    if(sim==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
