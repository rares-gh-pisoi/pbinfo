#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    int s=0;
    for(int i=1; i<=n; i++) {
        int nr;
        cin>>nr;
        int nrd=0;
        for(int d=1; d*d<=nr; d++) {
            if(nr%d==0) {
                if(d!=nr/d) {
                    nrd+=2;
                } else {
                    nrd++;
                }
            }

        }
        if(nrd>=k) {
            s+=nr;
        }
        nrd=0;
    }
    cout<<s;
    return 0;
}
