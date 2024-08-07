#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int f=2;
    while(n>1) {
        while(n%f==0) {
            cout<<f<<" ";
            n/=f;
        }

        f++;
        if(n>1 && f*f>n){
            f=n;
        }
    }
    return 0;
}
