#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ca,x,y;
    cin>>ca;
    int difmin=INT_MAX;
    int smin=INT_MAX;
    for (int i=2;i<=n;i++){
        int c;
        cin>>c;
        int dif=ca-c;
        int s=ca+c;
        if(dif<0){
            dif=dif*(-1);
        }
        if(dif<difmin){
            difmin=dif;
            smin=s;
            x=ca;
            y=c;
        }else if(dif==difmin){
            if(s<smin){
                smin=s;
                x=ca;
                y=c;
            }
        }
        ca=c;
    }
    cout<<x<<" "<<y;
    return 0;
}
