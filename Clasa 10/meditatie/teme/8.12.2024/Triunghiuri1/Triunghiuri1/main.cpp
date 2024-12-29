#include <iostream>
#include <algorithm>
using namespace std;
int v[1001];
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(v+1,v+n+1);
    for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            int st=j+1,dr=n,k=n;
            while(st<=dr){
                int k=(st+dr)/2;
                if(v[i]+v[j]>v[k]){
                    st=k+1;
                }else{
                    dr=k-1;
                }
            }
            cnt+=dr-j;
        }
    }
    cout<<cnt;
    return 0;
}
