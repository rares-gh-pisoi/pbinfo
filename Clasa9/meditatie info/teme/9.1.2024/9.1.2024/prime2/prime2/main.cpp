#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        int ok=1;
        if(x==0 || x==1){
            ok=0;
        }else{
            for(int d=2;d*d<=x;d++){
                if(x%d==0){
                    ok=0;
                }
            }
        }
        if(ok==1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
