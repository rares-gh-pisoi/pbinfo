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
        int ci=v[i];
        for(int j=i+1;j<=n;j++){
            if(ci==v[j]){
                for(int d=j;d<=n;d++){
                    v[d]=v[d+1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
