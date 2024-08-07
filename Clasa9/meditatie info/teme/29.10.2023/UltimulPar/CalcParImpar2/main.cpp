#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n,x;
    cin>>n;
    int MAX=INT_MIN;
    int MIN=INT_MAX;
    for (int i=1; i<=n; i++) {
        cin>>x;
        if (i%2==0) {
            if (x>MAX) {
                MAX=x;
            }
        } else {
            int c = x/10;
            // verificam numar doua cifre
            if (c>0 && c < 10) {
                if(x<MIN) {
                    MIN=x;
                }
            }

        }
    }

    if (MIN == INT_MAX) {
        MIN = -1;
    }


    cout<<MAX<<" "<<MIN;
    return 0;
}
