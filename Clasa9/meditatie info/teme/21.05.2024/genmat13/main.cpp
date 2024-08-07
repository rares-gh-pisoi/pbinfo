#include <iostream>

using namespace std;
int mat[25][25];
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==a || j==b){
                mat[i][j]=0;
            }
            if(i<a && j<b){
                mat[i][j]=1;
            }
            if(i>a && j<b){
                mat[i][j]=3;
            }
            if(i<a && j>b){
                mat[i][j]=2;
            }
            if(i>a && j>b){
                mat[i][j]=4;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
