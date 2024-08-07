#include <iostream>

using namespace std;
int v[201],y[201];
int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=n;i>=1;i--){
        if(v[i]%2==1){
            k++;
            y[k]=v[i];
        }
    }
    for(int i=1;i<=k;i++){
        cout<<y[i]<<" ";
    }
    return 0;
}
