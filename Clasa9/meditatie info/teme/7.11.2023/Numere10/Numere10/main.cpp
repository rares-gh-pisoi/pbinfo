#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;

    int Max=INT_MIN;
    int Min=INT_MAX;
    int cnt=0;

    for(int i=1; i<=n; i++) {
        int k;
        cin>>k;

        int prim=1;
        if (k<=1) {
            prim=0;
        } else {
            for(int d=2; d*d<=k; d++) {
                if(k%d==0) {
                    prim=0;
                    break;
                }
            }
        }

        if (prim==1) {
            if(k>Max) {
                Max=k;
            }
            if(k<Min) {
                Min=k;
            }
            cnt++;
        }

    }

    cout<<cnt<<" "<<Min<<" "<<Max;
    return 0;
}
