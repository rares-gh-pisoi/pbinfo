#include <iostream>
#include <climits>
using namespace std;
int v[500],n,i,cnt;
int main()
{
    cin>>n;
    cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];

    }

    for(int i=0;i<n/2;i++){
        int cf1=v[i]/10%10;
        int cf2=v[n-1-i]/10%10;
        if(cf1==cf2){
            cnt++;
        }

    }
    cout<<cnt;
    return 0;
}
