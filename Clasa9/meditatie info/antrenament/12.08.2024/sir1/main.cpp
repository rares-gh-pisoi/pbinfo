#include <iostream>

using namespace std;

int main()
{
    int n,s,t,poz;
    cin>>n;
    t=1;s=1;
    while((s)<n){
        t++;
        s+=t;
    }
    poz=n-s+t;
    cout<<t-poz+1;

    return 0;
}
