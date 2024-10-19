#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i][i]>a[i][n-i+1]){
            cout<<a[i][i]<<"\n";
        }else{
            cout<<a[i][n-i+1]<<"\n";
        }
    }
    return 0;
}
