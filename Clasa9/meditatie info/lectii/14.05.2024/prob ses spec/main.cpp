#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
        cin>>a[1][j];
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n+1){
                a[i][j]=(a[i-1][j]+a[i-1][j+1])%100;
            }else{
                a[i][j]=-1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
