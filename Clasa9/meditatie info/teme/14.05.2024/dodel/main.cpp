#include <iostream>
#include <climits>
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
    int max1=-100005;
    int max2=-100005;
    int min1=100005;
    int min2=100005;
    for(int i=1;i<=n;i++){
        if(a[i][i]>max1){
            max1=a[i][i];
        }
        if(a[i][n+1-i]>max2){
            max2=a[i][n+1-i];
        }
        if(a[i][i]<min1){
            min1=a[i][i];
        }
        if(a[i][n+1-i]<min2){
            min2=a[i][n+1-i];
        }
    }
    long long pr1=1LL *max1*1LL*max2;
    long long pr2=1LL*min1*1LL*min2;
    if(pr1>pr2){
        cout<<pr1;
    }else{
        cout<<pr2;
    }
    return 0;
}
