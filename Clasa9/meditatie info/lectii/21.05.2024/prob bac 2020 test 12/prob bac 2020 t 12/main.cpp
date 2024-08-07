#include <iostream>

using namespace std;
a[21][21];
int main()
{
    int n,k;
    cin>>n>>k;
    int l=1;
    for(int i=1;i<=n*k;i++){
        for(int j=1;j<=n;j++){
           a[i][j]=j+l-1;
           if(i%k==0){
                l++;
           }
        }
    }
    return 0;
}
