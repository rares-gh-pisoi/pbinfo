#include <iostream>

using namespace std;
int v[100001];
int fr[100001];
int main()
{
    int n,k,x;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int pos=0;
    int st=1;
    int nr=0;
    for(int dr=1;dr<=n;dr++){
        if(fr[v[dr]]==0){
            nr++;
        }
        fr[v[dr]]++;
        while(nr>=k){
            pos+=n-dr+1;
            fr[v[st]]--;
            if(fr[v[st]]==0){
                nr--;
            }
            st++;
        }
    }
    cout<<pos;
    return 0;
}
