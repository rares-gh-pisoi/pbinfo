#include <iostream>

using namespace std;
int a[21][21];
int v[21];
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
        for(int j=n;j>=1;j--){
            v[j]=v[j-1];
            if(j==1){
                v[j]=aux;
            }
        }
    }
    return 0;
}
