#include <iostream>

using namespace std;
int v[51];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        if(v[i]%2==0){
            int j;
            for(j=n;j>i;j--){
                v[j+1]=v[j];
            }
            n++;
            v[i+1]=2*v[i];
            i++;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
