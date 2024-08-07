#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int xmin=INT_MAX;
    int xmax=INT_MIN;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x<xmin){
            xmin=x;
        }
        if(x>xmax){
            xmax=x;
        }
    }
    int cmmdc;
    while(xmax!=0){
        int r=xmin%xmax;
        xmin=xmax;
        xmax=r;
    }
    cmmdc=xmin;
    cout<<cmmdc;
    return 0;
}
