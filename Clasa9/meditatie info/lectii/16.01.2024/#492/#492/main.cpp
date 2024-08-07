#include <iostream>

using namespace std;
int v[201],n,i;
int main()
{
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n/2;i++){
        int x=v[i];
        int y=v[n-i+1];
        int cmmdc;
        while(y!=0){
            int r=x%y;
            x=y;
            y=r;
        }
        cmmdc=x;
        if(cmmdc==1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
