#include <iostream>

using namespace std;
int v[1001],n,i;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<v[i]<<" ";
        }
    }
    cout<<"\n";
    for(int i=n;i>=1;i--){
        if(i%2==1){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
