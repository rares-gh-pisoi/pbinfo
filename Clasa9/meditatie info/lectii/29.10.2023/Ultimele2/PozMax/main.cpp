#include <iostream>
#include <cfloat>
using namespace std;

int main() {
    int n;
    float p;
    cin>>n;
    float MAX=FLT_MIN;
    int ap1=0;
    int ap2=0;
    for (int i=1; i<=n; i++) {
        cin>>p;
        if (MAX<p) {
            MAX=p;
            ap1=i;
            ap2=i;
        } else {
            if (MAX==p) {
                ap2=i;
            }
        }
    }
    cout<<ap1<<" "<<ap2;
    return 0;
}
