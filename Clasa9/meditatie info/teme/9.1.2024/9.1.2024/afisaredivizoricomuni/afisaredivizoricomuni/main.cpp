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
    for(int d=1;d<=cmmdc;d++){
        if(cmmdc%d==0){
            cout<<d<<" ";
        }
    }
    return 0;
}
