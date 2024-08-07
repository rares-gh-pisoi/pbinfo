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
    if(cmmdc==1){
        cout<<"PIE";
    }else{
        cout<<"NOPIE";
    }
    return 0;
}
