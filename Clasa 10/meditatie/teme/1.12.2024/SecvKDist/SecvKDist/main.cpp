#include <iostream>

using namespace std;
int a[100001];
int fr[100001];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long lg=0;
    int st=1;
    int nr=0;
    for(int dr=1;dr<=n;dr++){
        if(fr[a[dr]]==0){
            nr++;
        }
        fr[a[dr]]++;
        while(nr>=k){
            lg+=n-dr+1;
            fr[a[st]]--;
            if(fr[a[st]]==0){
                nr--;
            }
            st++;
        }
    }
    cout<<lg;
    return 0;
}
