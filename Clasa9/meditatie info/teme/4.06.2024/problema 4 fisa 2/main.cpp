#include <iostream>

using namespace std;
int a[51][51];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int s=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]>0){
                if(i%2==1 && j%2==0){
                    s+=a[i][j];
                }
            }
        }
    }
    cout<<s;
    return 0;
}
