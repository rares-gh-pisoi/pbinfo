#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int ncf=0;
    if(n==0) {
        ncf=1;
    } else {
        while(n!=0) {
            ncf++;
            n/=10;
        }
    }
    cout<<ncf;
    return 0;
}
