#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,c,cnt,x,ok;
    cin>>n;
    cnt=0;
    c=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        ok=1;
        while(x!=0 && ok==1){
            if(x%2==0){
                ok=0;
                break;
            }
            x/=2;
        }
        if(ok==1){
            c++;
            if(cnt<c)
                cnt=c;
        }else
            c=0;
    }
    cout<<cnt;
    return 0;
}
