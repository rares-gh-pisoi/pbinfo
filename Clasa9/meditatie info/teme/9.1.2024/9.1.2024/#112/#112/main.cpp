#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int xmax=INT_MIN;
    int xmin=INT_MAX;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x>xmax){
            xmax=x;
        }
        if(x<xmin){
            xmin=x;
        }
    }
    int cmmdc;
    int cxmax=xmax;
    int cxmin=xmin;
    while(xmin!=0){
        int r=xmax%xmin;
        xmax=xmin;
        xmin=r;
    }
    cmmdc=xmax;
    cxmax/=cmmdc;
    cxmin/=cmmdc;
    cout<<cxmin<<"/"<<cxmax;
    return 0;
}
