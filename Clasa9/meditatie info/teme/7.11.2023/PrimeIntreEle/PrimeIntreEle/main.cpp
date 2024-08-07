#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int cmmdc;
    while(b!=0){
        int rest=a%b;
        a=b;
        b=rest;
    }
    cmmdc=a;
    if(cmmdc==1){
        cout<<"PIE";
    }else{
        cout<<"NOPIE";
    }
    return 0;
}
