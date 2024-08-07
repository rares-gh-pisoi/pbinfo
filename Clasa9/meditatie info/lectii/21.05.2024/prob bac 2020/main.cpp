#include <iostream>

using namespace std;
int a[8][8];
int main()
{
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            cin>>a[i][j];
        }
    }
    int p=1;
    for(int i=1;i<=7;i++){
        p*=a[i][i];
    }
    for(int i=7;i>=1;i--){
        cout<<p<<" ";
        p/=a[i][i];
    }
    return 0;
}
