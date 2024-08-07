#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int S=0;
    for(int i=1; i<=n; i++) {
        int c;
        cin>>c;
        int ok=1;
        if(c==0 || c==1) {
            ok=0;
        } else {
            for(int d=2; d*d<=c; d++) {
                if(c%d==0) {
                    ok=0;
                    break;
                }
            }
        }
        if(ok==1){
            while(c!=0){
                int cf=c%10;
                S+=cf;
                c/=10;
            }
        }

    }
    cout<<S;
    return 0;
}
