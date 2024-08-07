#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    long long s=a;
    lo c=b;
    int cmmdc;
    while(b!=0){
        int rest=a%b;
        a=b;
        b=rest;
    }
    cmmdc=a;
    long long cmmmc=s*c/cmmdc;
    cout<<cmmdc<<" "<<cmmmc;
    return 0;
}
