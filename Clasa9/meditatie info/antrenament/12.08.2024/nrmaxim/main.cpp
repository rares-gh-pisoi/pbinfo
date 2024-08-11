#include <iostream>
#include <climits>
using namespace std;
int nrmaxim(int n){
    int nrmax=-2000000000;
    int cf=0;
    int cn=n;
    while(cn!=0){
        cf++;
        cn/=10;
    }
    int cn2=n;
    while(cf>0) {
        int nr=0;
        int p=1;
        while(cn2>9) {
            int c=cn2%10;
            cn2/=10;
            nr=c*p+nr;
            p*=10;

        }
        nr=nr*10+cn2;
        if(nr>nrmax){
            nrmax=nr;
        }
        cn2=nr;
        cf--;
    }
    return nrmax;
}
int main()
{
    int n;
    cin>>n;
    cout<<nrmaxim(n);
    return 0;
}
