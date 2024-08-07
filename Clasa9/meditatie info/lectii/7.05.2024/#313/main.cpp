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
    int s1=0;
    int s2=0;
    for(int i=1;i<=n;i++){
        s1+=a[i][i];
    }
    for(int i=1;i<=n;i++){
        s2+=a[i][n+1-i];
    }
    int valc;
    if(s1>=s2){
        valc=s1-s2;
    }else{
        valc=(s1-s2)*(-1);
    }
    cout<<valc;
    return 0;
}
