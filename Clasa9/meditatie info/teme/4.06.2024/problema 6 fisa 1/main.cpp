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
    int vmax=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[k][i]>vmax){
                vmax=a[k][i];
            }
        }
    }
    cout<<vmax;
    return 0;
}
