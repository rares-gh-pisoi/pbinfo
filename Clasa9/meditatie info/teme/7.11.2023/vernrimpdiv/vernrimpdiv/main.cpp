#include <iostream>

using namespace std;

int main() {
    int n,d;
    cin>>n;
    int cnt=0;
    for(d=1; d*d<n; d++) {
        if(n%d==0) {
            cnt+=2;
        }
    }
    if(d*d==n){
        cnt++;
    }

    if(cnt%2==1) {
        cout<<"da";
    } else {
        cout<<"nu";
    }
}
