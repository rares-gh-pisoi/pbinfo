#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int ogl=0;

    while(n!=0) {
        int c=n%10;
        ogl=ogl*10+c;
        n/=10;
    }
    cout<<ogl;

    return 0;
}
