#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int cmmdp(int a) {
    int dmax;
    for(int d=2; d*d<=a; d++) {
        if(a%d==0) {
            dmax=d;
            while(a%d==0) {
                a/=d;
            }
        }
    }
    if(a!=1)
        dmax=a;
    return dmax;
}
int fr1[10001];
int fr2[10001];
int ap[10001];
int main() {
    int n,c,x;
    fin>>n>>c;
    for(int i=1; i<=n; i++) {
        fin>>x;
        x=cmmdp(x);
        if(fr1[x]==0) {
            fr1[x]=i;
        }
        fr2[x]=i;
        ap[x]++;
    }
    if(c==1) {
        int lgmax=-1;
        for(int i=2; i<=10000; i++) {
            if(fr1[i]!=0) {
                int lg=fr2[i]-fr1[i]+1;
                if(lg>lgmax)
                    lgmax=lg;
            }
        }
        fout<<lgmax;
        return 0;
    }
    int s=0;
    for(int i=2;i<=10000;i++){
        if(ap[i]>1){
            s+=ap[i];
        }
    }
    fout<<s;
    return 0;
}
