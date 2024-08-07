#include <iostream>

using namespace std;
int a[51][51];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int p=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]>=0){
                if(i%2==0 && j%2==0){
                    p*=a[i][j];
                }
            }
        }
    }
    cout<<p;
    return 0;
}
