#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int r=n%k;
    int c=n/k;
    float j=k/2;
    if (r<=j)
        cout<<c*k;
    else
        cout<<(c+1)*k;
    return 0;
}
