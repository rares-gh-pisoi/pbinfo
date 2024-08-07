#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int d;
    int cnt=0;

    for(d=1;d*d<n;d++){
        if(n%d==0){
            if(d%2==0){
                cnt++;
            }
            if(n/d%2==0){
                cnt++;
            }
        }

    }
    if(d*d==n && d%2==0){
        cnt++;
    }
    cout<<cnt;
    return 0;
}
