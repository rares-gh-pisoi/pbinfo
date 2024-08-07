#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int cmmdc;
    int cnt=0;
    while(y!=0){

        int cy=y;
        while(y!=0){
            int r=x%y;
            x=y;
            y=r;
        }
        cmmdc=x;
        if(cmmdc==1){
            cnt++;
        }
        x=cy;
        cin>>y;
    }
    cout<<cnt;
    return 0;
}
