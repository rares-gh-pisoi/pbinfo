#include <iostream>

using namespace std;
int a[25][25];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i][i]=0;
    }
    int cn=n;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            if(i!=j){
                a[i][j]=cn;
            }
        }
        cn--;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
