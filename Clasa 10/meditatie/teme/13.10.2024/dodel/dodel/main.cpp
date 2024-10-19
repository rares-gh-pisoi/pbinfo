#include <iostream>

using namespace std;
int a[22][22];
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
        if(a[i][i]<min1)
            min1=a[i][i];
        if(a[i][n-i+1]>max2){
            max2=a[i][n-i+1];
        }
        if(a[i][n-i+1]<min2)
            min2=a[i][n-i+1];
    }
    long long pr1=max1*max2;
    long long pr2=min1*min2;
    if(pr1>pr2){
        cout<<pr1;
    }else
        cout<<pr2;
    return 0;
}
