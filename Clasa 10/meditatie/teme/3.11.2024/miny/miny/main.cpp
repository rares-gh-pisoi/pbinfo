#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("miny.in");
ofstream fout("miny.out");

int ap[10001];
int main() {
    int n,x;
    fin>>n;

    int p=1;
    for(int i=1; i<=n; i++) {
        fin>>x;
        p=p*(x%100)%100;
        for(int d=2; d*d<=x; d++) {
            if(x%d==0) {
                int exp=0;
                while(x%d==0) {
                    exp++;
                    x/=d;
                }
                ap[d]+=exp;
            }
        }
        if(x!=1) {
            ap[x]++;
        }
    }
    fout<<p/10%10<<"\n";
    int cnt=0;
    int expmin=INT_MAX;;
    for(int i=2; i<=10000; i++) {
        if(ap[i]>0) {
            if(ap[i]<expmin) {
                expmin=ap[i];
            }
            cnt++;
        }
    }
    fout<<cnt<<"\n";
    for(int i=2; i<=10000; i++) {
        if(ap[i]>0) {
            fout<<i<<" "<<ap[i]/expmin<<"\n";
        }
    }
    return 0;
}
