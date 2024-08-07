#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int n;
    cin>>n;
    int s1=0,s2=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        s1+=a[i][i];
        s2+=a[i][n+1-i];
    }
    int dif=s1-s2;
    if(dif<0){
        cout<<dif*(-1);
    }else{
        cout<<dif;
    }
    return 0;
}
