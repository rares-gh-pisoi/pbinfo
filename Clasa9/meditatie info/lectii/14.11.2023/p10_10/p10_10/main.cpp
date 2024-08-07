#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int nrz=0;

    while(n%10==0) {
        nrz++;
        n=n/10;
    }
    cout<<1;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=nrz;j++){
            cout<<0;
        }
    }
    return 0;
}
