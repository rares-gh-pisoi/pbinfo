#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int maxa=-1;
    int mina=10;
    int maxb=-1;
    int minb=10;
    int bun=-1;
    if(a==0) {
        maxa=0;
        mina=0;
    } else {
        while(a!=0) {
            int c1=a%10;
            if(c1>maxa) {
                maxa=c1;
            }
            if(c1<mina) {
                mina=c1;
            }
            a/=10;
        }
    }
    if(b==0) {
        maxb=0;
        minb=0;
    } else {
        while(b!=0) {
            int c2=b%10;
            if(c2>maxb) {
                maxb=c2;
            }
            if(c2<minb) {
                minb=c2;
            }
            b/=10;
        }
    }
    if(maxa==minb) {
        bun=maxa;
    } else if(mina==maxb) {
        bun=mina;
    }

    if(bun==-1) {
        cout<<"NU";
    } else {
        cout<<bun;
    }
    return 0;
}
