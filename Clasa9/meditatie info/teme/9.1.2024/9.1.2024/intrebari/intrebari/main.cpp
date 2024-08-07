#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n,t,p;
    cin>>n>>t>>p;
    int xmin=INT_MAX;
    int xmax=INT_MIN;
    int nrd=0;
    int Sum=0;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if(i<=p) {
            if(x<xmin) {
                xmin=x;
            }
            if(x>xmax) {
                xmax=x;
            }
        }
        Sum+=x;
    }
    switch (t) {
    case 1: {
        int s=0;
        while(xmin!=0) {
            int c=xmin%10;
            s+=c;
            xmin/=10;
        }
        cout<<s<<"\n"<<Sum;
        break;
    }
    case 2:{
        for(int d=1;d*d<=xmax;d++){
            if(xmax%d==0){
                if(d*d<xmax){
                    nrd+=2;
                }else{
                    nrd++;
                }
            }
        }
        cout<<nrd<<"\n"<<Sum;
        break;
    }

    }
    return 0;
}
