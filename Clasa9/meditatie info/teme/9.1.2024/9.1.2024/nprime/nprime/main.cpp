#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt=0;
    for(int i=2; i<=INT_MAX; i++) {
        int prim=1;

        for(int d=2; d*d<=i; d++) {
            if(i%d==0) {
                prim=0;
                break;
            }
        }
        if(prim==1) {
            cout<<i<<" ";
            cnt++;
        }

        if(cnt==n) {
            break;
        }
    }

    return 0;
}
