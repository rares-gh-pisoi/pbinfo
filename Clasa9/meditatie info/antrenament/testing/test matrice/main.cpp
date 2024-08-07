#include <iostream>

using namespace std;
int a[51][51];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
