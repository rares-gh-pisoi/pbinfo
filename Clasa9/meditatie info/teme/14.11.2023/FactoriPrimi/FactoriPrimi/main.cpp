#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int pf1=1;
    int f=2;
    while(a>1){
        if (a%f==0){
            pf1*=f;
        }
        while (a%f==0){
            a=a/f;
        }
        f++;
        if(f*f>a){
            f=a;
        }
    }
    int pf2=1;
    int d=2;
    while (b>1){
        if(b%d==0){
            pf2*=d;
        }
        while(b%d==0){
            b/=d;
        }
        d++;
        if(d*d>b){
            d=b;
        }
    }
    if(pf1==pf2){
        cout<<"DA";
    }else{
        cout<<"NU";
    }
    return 0;
}
