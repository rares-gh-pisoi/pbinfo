#include <iostream>

using namespace std;
int a[30][30];
int main()
{
    int n,m;
    cin>>n>>m;
    int cn=n;
    for(int i=0;i<n;i++){
        int pr=cn*m;
        for(int j=0;j<m;j++){
            a[i][j]=pr;
            pr--;
        }
        cn--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
