#include <iostream>

using namespace std;
int v[2001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        if(v[i]<0){
            for(int j=n;j>i;j--){
                v[j+1]=v[j];
            }
            n++;
            v[i+1]=v[i]*(-1);
            i++;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
