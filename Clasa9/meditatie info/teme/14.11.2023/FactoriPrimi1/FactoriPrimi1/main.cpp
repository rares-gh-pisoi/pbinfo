#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int pf=1;
    int f=2;

    while(n>1){
        if(n%f==0){
            pf*=f;
        }
        while(n%f==0){
            n=n/f;
        }
         f++;

        if(n>1 && f*f>n){
            f=n;
        }

    }
    cout<<pf;
    return 0;
}
