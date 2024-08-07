#include <iostream>
#include <climits>
using namespace std;
int a[21][21];
int main()
{
    int n,cnt,vecmax;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            vecmax=INT_MIN;
            if(a[i-1][j]>vecmax && i-1>=1){
                vecmax=a[i-1][j];
            }
            if(a[i+1][j]>vecmax && i+1<=n){
                vecmax=a[i+1][j];
            }
            if(a[i][j-1]>vecmax && j-1>=1){
                vecmax=a[i][j-1];
            }
            if(a[i][j+1]>vecmax && j+1<=n){
                vecmax=a[i][j+1];
            }
            if(a[i][j]>vecmax){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
