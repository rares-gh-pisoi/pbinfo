#include <iostream>
#include <fstream>
#include<climits>
using namespace std;
ifstream fin("inventie.in");
ofstream fout("inventie.out");
int main() {
    int N;
    fin>>N;
    unsigned long long impmin=ULLONG_MAX;
    unsigned long long impmax=0;
    for(int i=1; i<=N; i++) {
        unsigned long long a,b;
        fin>>a>>b;
        long long df=a-b;
        if(df<0) {
            df=df*(-1);
        }
        unsigned long long su=a+b;
        unsigned long long cdf=su;
        int cnt=0;
        while(cdf!=0) {
            cnt++;
            cdf/=10;
        }
        int nrz=1;
        while(cnt!=0) {
            nrz*=10;
            cnt--;
        }
        unsigned long long nrc=df*nrz+su;
        if(nrc%2==1) {
            if(nrc>impmax) {
                impmax=nrc;
            }
            if(nrc<impmin) {
                impmin=nrc;
            }
        }
        fout<<nrc<<"\n";
    }
    if(impmin==ULLONG_MAX) {
        fout<<0;
    } else {
        fout<<impmin<<"\n"<<impmax;
    }

    return 0;
}
