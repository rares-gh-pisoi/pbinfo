#include <iostream>
#include <climits>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long f=2;
    long long d;
    while(n>1) {
        if(n%f==0) {
            d=f;
            while(n%f==0) { /// se imparte numarul la acel divizor pana cand n%f!=0
                n/=f;
            }
        }

        f++;
        if(n>1 && f*f>n) {
            f=n;
        }

    }

    cout<<d;
    return 0;
}
