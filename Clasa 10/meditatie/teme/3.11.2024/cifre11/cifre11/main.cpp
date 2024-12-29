#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("cifre11.in");
ofstream fout("cifre11.out");
int scif(int n) {
    int s=0;
    while(n!=0) {
        s=s+n%10;
        n/=10;
    }
    return s;
}
int v[10];
int cifconsmax(int n) {
    int lgmax=0;
    while(n!=0) {
        int c=n%10;
        v[c]=1;
        n/=10;
    }
    int lg=1;
    for(int i=0; i<=9; i++) {
        if(v[i]==1 && v[i+1]==1) {
            lg++;
        } else {
            lg=1;
        }
        if(lg>lgmax) {
            lgmax=lg;
        }
    }
    for(int i=0; i<=9; i++) {
        v[i]=0;
    }
    return lgmax;
}
int ap1[10];
int ap2[10];
int main() {
    int n,x;
    fin>>n;
    int smin=INT_MAX,xmax=INT_MIN;
    int xmin=INT_MAX;
    int consmax=-1;
    int apmax=0;
    for(int i=1; i<=n; i++) {
        fin>>x;
        if(scif(x)<smin) {
            smin=scif(x);
            xmax=x;
        } else if(scif(x)==smin && x>xmax) {
            xmax=x;
        }
        if(cifconsmax(x)>consmax) {
            consmax=cifconsmax(x);
            xmin=x;
        } else if(cifconsmax(x)==consmax && x<xmin) {
            xmin=x;
        }
        int cx=x;
        while(cx!=0) {
            int c=cx%10;
            ap1[c]=1;
            cx/=10;
        }
        for(int i=0; i<=9; i++) {
            if(ap1[i]==1) {
                ap2[i]++;
            }
        }
        for(int i=0; i<=9; i++) {
            ap1[i]=0;
        }
    }
    for(int i=0; i<=9; i++) {
        if(ap2[i]>apmax)
            apmax=ap2[i];
    }
    fout<<xmax<<"\n"<<xmin<<"\n";
    for(int i=0; i<=9; i++) {
        if(ap2[i]==apmax) {
            fout<<i<<" ";
        }
    }
    return 0;
}
