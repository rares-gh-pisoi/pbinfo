#include <iostream>

using namespace std;

int main() {
    int n,pr,fct,exp;
    cin>>n;
    pr=1;
    fct=-1;
    exp=0;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        int d=2,nrd;
        while(x>1){
            nrd=0;
            while(x%d==0){
                nrd++;
                x/=d;
            }
            if(nrd){
                if(d>fct){
                    fct=d;
                    exp=nrd;
                }else if(d==fct){
                    exp+=nrd;
                }
            }
            d++;
            if(x>1 && d*d>x)
                d=x;
        }

    }
    cout<<fct<<" "<<exp;
    return 0;
}
