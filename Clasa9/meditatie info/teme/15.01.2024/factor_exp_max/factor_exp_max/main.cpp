#include <iostream>
#include <climits>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int maxp=INT_MIN;
    int maxf=INT_MIN;
    int f=2;
    while(n>1) {

        int p=0;
        while(n%f==0) {
            p++;
            n=n/f;
        }
        int cf=f;
        f++;
        if(n>1 && f*f>n) {
            f=n;
        }
        if(p>maxp) {
            maxp=p;
            maxf=cf;
        } else {
            if(p==maxp) {
                if(maxf<f) {
                    maxf=cf;
                }
            }
        }


    }

    cout<<maxf;
    return 0;
}
