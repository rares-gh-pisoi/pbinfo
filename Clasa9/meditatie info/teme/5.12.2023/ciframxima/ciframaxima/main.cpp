#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cfmax=-1;
    while(n>1){
        int cf=n%10;
        if(cf>cfmax){
            cfmax=cf;
        }
        n/=10;
    }
    cout<<cfmax;
    return 0;
}
