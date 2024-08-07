#include <iostream>
#include <climits>
using namespace std;
int v[101];
int main()
{
    int n;
    cin>>n;
    int maxpj=INT_MIN;
    int maxdj=INT_MIN;
    for(int i=1;i<=2*n;i++){
        cin>>v[i];
        if(i<=n){
            if(v[i]>maxpj){
                maxpj=v[i];
            }
        }else{
            if(v[i]>maxdj){
                maxdj=v[i];
            }
        }
    }
    cout<<1<<":"<<maxpj<<" "<<2<<":"<<maxdj;
    return 0;
}
