#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int n,s1,s2,dif;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    s1=0;
    s2=0;
    for(int i=1;i<=n;i++){
        s1+=a[i][i];
    }
    for(int i=1;i<=n;i++){
        s2+=a[i][n+1-i];
    }
    dif=s1-s2;
    if(dif<0)
        dif*=-1;
    cout<<dif;
    return 0;
}
