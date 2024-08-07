#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int m,n;
    cin>>m>>n;
    int cnt=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(cnt%5!=0){
                a[i][j]=cnt*2;
            }else{
                a[i][j]=(cnt+1)*2;
                cnt++;
            }
            cnt++;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
