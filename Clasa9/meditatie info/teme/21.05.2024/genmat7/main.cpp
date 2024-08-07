#include <iostream>

using namespace std;
int a[25][25];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i][i]=0;
        a[i][n+1-i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>i && j+i<n+1){
                a[i][j]=1;
            }
            if(j<i && j+i>n+1){
                a[i][j]=2;
            }
            if(j>i && j+i>n+1){
                a[i][j]=3;
            }
            if(j<i && j+i<n+1){
                a[i][j]=3;
            }
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
