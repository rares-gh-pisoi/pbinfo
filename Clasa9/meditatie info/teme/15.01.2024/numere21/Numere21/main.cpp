#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int s=0;
    //cout<<a<<" "<<b<<endl;
    while(a!=0 || b!=0) {
        int c1a=a;
        int c1b=b;
        int c2a=a;
        int c2b=b;
        int ogla=0;
        int oglb=0;

        // se calculeaza ogl lui a
        while(c1a!=0) {
            int c=c1a%10;
            ogla=ogla*10+c;
            c1a/=10;
        }
        // cout<<"oglinditul lui a este "<<ogla<<endl;

        // se calculeaza ogl lui b
        while(c1b!=0) {
            int h=c1b%10;
            oglb=oglb*10+h;
            c1b/=10;
        }

       // cout<<"oglinditul lui b este "<<oglb<<endl;

        // calculam ccmdcul celor 2 nr
        int cmmdc1;
        while(b!=0) {
            int r1=a%b;
            a=b;
            b=r1;
        }
        cmmdc1=a;
       // cout<<"primul cmmdc este "<<cmmdc1<<endl;

        // calculam cmmdcul oglinditelor
        int cmmdc2;
        while(oglb!=0) {
            int r2=ogla%oglb;
            ogla=oglb;
            oglb=r2;
        }
        cmmdc2=ogla;
       // cout<<"al doilea cmmdc este "<<cmmdc2<<endl;

        // verificam daca cele doua cmmdcuri sunt egale cu 1
        if(cmmdc1==1 && cmmdc2==1){
            s=s+c2a+c2b;

        }
        cin>>a>>b;
    }
    cout<<s;
    return 0;
}
