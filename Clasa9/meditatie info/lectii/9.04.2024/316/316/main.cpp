#include <iostream>
#include <climits>
using namespace std;
int a[21][21];
int
int main()
{
    int n,m;
    cin>>m>>n;
    int amin=INT_MAX;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]<amin){
                amin=a[i][j];
            }
        }
    }
    for(int j=1;j<=n;j++){
        for(int i=1;i<=m;i++){

        }
    }

    return 0;
}
