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
        if (x>MAX && i%2==0)
            MAX=x;
        if (MIN>x && x/10>0 && x/10<10  && i%2==1)
            MIN=x;
    }
    if (MIN==INT_MAX)
        MIN=-1;

    cout<<MAX<<" "<<MIN;
    return 0;
}
a
