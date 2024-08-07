#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int snum,numi;
    if(b==d){
        snum=a+c;
        numi=b;
    }else{
        snum=a*d+b*c;
        numi=b*d;
    }
    int cmmdc1;
    int csnum=snum;
    int cnumi=numi;
    while(snum!=0){
        int r1=numi%snum;
        numi=snum;
        snum=r1;
    }
    cmmdc1=numi;
    csnum/=cmmdc1;
    cnumi/=cmmdc1;
    cout<<csnum<<" "<<cnumi<<"\n";

    int prnum,prnumi;
    prnum=a*c;
    prnumi=b*d;
    int cmmdc2;
    int cprnum=prnum;
    int cprnumi=prnumi;
    while(prnum!=0){
        int r2=prnumi%prnum;
        prnumi=prnum;
        prnum=r2;
    }
    cmmdc2=prnumi;
    cprnum/=cmmdc2;
    cprnumi/=cmmdc2;
    cout<<cprnum<<" "<<cprnumi;
    return 0;
}
