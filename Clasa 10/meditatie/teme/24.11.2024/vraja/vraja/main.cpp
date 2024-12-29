#include <iostream>

using namespace std;
int v[1001];
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int ok;
    do{
        ok=1;
        for(int i=1;i<n;i++){
            if(v[i]<v[i+1]){
                cnt++;
                v[i]+=k;
                ok=0;
            }
        }
    }while(ok==0);
    cout<<cnt;
    return 0;
}
