#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int s=0;
    while(n>1) {
        int cf=n%10;
        if(cf>=3 && cf<=7) {
            s+=cf;
        }
        n/=10;
    }
    cout<<s;
    return 0;
}
