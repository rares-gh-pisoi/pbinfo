#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n,nr;
    cin>>n;
    int pcm=10; // prima cifra minima
    int nrmax=INT_MIN;
    for (int i=1; i<=n; i++) {
        cin>>nr;
        int cnr=nr;
        int pc;
        while(cnr>9) {
            cnr/=10;
        }
        pc=cnr;
        if(pc<pcm) {
            pcm=pc;
            nrmax=nr;
        } else if(pc==pcm) {
            if(nr>nrmax){
                nrmax=nr;
            }
        }
    }
    cout<<nrmax;
    return 0;
}
