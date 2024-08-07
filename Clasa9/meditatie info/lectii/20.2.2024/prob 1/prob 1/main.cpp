#include <iostream>

using namespace std;
int v[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        if(v[i]<0){
            for(int j=i+1;j<=n;j++){
                v[j-1]=v[j];
            }
            n--;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
