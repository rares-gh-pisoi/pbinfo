#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin>>k>>n;
    long long s=0;
    for(int i=1; i<=n; i++) {
        int nr;
        cin>>nr;
        int cnr=nr;

        // se calculeaza nr de factori primi
        // fk=nr de factori primi
        int fk=0;

        // f=factorul prim
        int f=2;
        while(nr>1) {
            if(nr%f==0) {
                fk++;
            }
            while(nr%f==0) {
                nr/=f;
            }
            f++;
            if(nr>1 && f*f>nr) {
                f=nr;
            }
        }

        // cout<<"nr:"<<cnr<<" nr fact este "<<fk<<endl;
        if(fk>=k) {
            s+=cnr;
        }
    }
    cout<<s;
    return 0;
}
