#include <iostream>
#include <algorithm>
using namespace std;
int v[1001];
int main()
{
    int n,b;
    cin>>n>>b;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(v+1,v+n+1);
    int cnt=0;
    int nrc;
    for(int i=1;i<=n;i++){
        if(v[i]<=b){
            cnt++;
            b-=v[i];
        }else{
            nrc=v[i]-b;
            break;
        }
    }
    cout<<cnt<<" "<<nrc;
    return 0;
}
