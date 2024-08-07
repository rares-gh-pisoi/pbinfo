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
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=n;j++){
            if(j<i && i+j<n+1){
               ap[a[i][j]]=1;
            }
        }
    }
    for(int i=0;i<1000;i++){
        if(ap[i]==1){
            cout<<i<<" ";
        }
    }
    return 0;
}
