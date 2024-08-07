#include <iostream>

using namespace std;
int v[16];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
        int aux=v[n];
        for(int j=n;j>1;j--){
            v[j]=v[j-1];
        }
        v[1]=aux;
    }
    return 0;
}
