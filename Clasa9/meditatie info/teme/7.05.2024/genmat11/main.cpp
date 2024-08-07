#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int n;
    cin>>n;
    int nr=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(nr%3!=0){
                a[i][j]=nr*2;
            }else{
                a[i][j]=(nr+1)*2;
                nr++;
            }
            nr++;
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
