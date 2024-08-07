#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");
int ap[1000000];
int main() {
    int n;
    while(fin>>n) {
        if(n<10) {
            ap[n]++;
        }
    }
    int nrmax=0;
    int cnt;
    for(int i=0; i<=9; i++) {
        int prim=1;
        if(i==1 || i==0) {
            prim=0;
        } else {
            for(int d=2; d*d<=i; d++) {
                if(i%d==0) {
                    prim=0;
                    break;
                }
            }
        }
        if(prim==1 && ap[i]>0) {
            if(i>nrmax) {
                nrmax=i;
                cnt=ap[i];
            }
        }
    }
    fout<<nrmax<<" "<<cnt;
    return 0;
}
