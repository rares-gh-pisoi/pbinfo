#include <iostream>
#include <climits>
using namespace std;
int a[51][51];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int vmin=INT_MAX;
    for(int i=1;i<=n;i++){
        if(a[i][k]>vmin){
            vmin=a[i][k];
        }
    }
    cout<<vmin;
    return 0;
}
