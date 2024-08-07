#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int cmmdc;
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    cmmdc=a;
    for (int i=1;i<=cmmdc;i++){
        if(cmmdc%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
