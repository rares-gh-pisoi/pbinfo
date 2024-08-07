#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cmmdc;
    int cmmdcmax=INT_MIN;
    int s=0;
    int smax=0;
    int cx,cy;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        int ccx=x;
        int ccy=y;
        s=x+y;
        while(y!=0){
            int r=x%y;
            x=y;
            y=r;
        }
        cmmdc=x;
        if(cmmdc>cmmdcmax){
            cmmdcmax=cmmdc;
            smax=s;
            cx=ccx;
            cy=ccy;
        }else if(cmmdc==cmmdcmax){
            if(s>smax){
                smax=s;
                cx=ccx;
                cy=ccy;
            }
        }

    }
    cout<<cx<<" "<<cy;
    return 0;
}
