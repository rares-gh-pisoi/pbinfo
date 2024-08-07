#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ogl=0;
    while(n>=1){
        int cf=n%10;
        ogl=ogl*10+cf;
        n=n/10;
    }
    int cnt=0;
    int d;
    for(d=1;d*d<ogl;d++){
        if(ogl%d==0){
            cnt+=2;
        }
    }
    if(d*d==ogl){
        cnt++;
    }
    cout<<cnt;

    return 0;
}
