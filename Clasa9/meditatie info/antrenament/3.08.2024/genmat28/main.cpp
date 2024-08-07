#include <iostream>

using namespace std;
int a[31][31];
int main()
{
    int n,cn;
    cin>>n;
    cn=n;
    for(int s=2;s<=n+1;s++){
        if(s%2==1){
            for(int i=s-1;i>=1;i--)
                a[s-i][i]=cn;
            cn--;
        }else{
            for(int i=s-1;i>=1;i--)
                a[i][s-i]=n-cn+1;

        }
    }
    for(int i=2;i<=n;i++){
        for(int j=n+2-i;j<=n;j++){
            a[i][j]=a[n-i+1][n-j+1];
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
