#include <iostream>

using namespace std;
int a[201][201];
int ap[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(j<i && j+i>n+1){
                ap[a[i][j]]++;
            }
        }
    }
    for(int i=0;i<1000;i++){
        if(ap[i]>=2){
            cout<<i<<" ";
        }
    }
    return 0;
}
