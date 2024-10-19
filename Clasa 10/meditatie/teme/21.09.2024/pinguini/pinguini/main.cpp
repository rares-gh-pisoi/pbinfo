#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("pinguini.in");
ofstream fout("pinguini.out");
int v[10001];
int main() {
    int c,n;
    fin>>c>>n;
    for(int i=1; i<=n; i++) {
        fin>>v[i];
    }
    if(c==1) {
        int nrp=0;
        for(int i=1; i<=n; i++) {
            if(v[i]==2) {
                nrp++;
            }
        }
        fout<<nrp;
    } else if(c==2) {
        int gri=0;
        int pg=0;
        for(int i=1; i<n; i++) {
            if(i==1 && v[i]==2){
                pg=1;
            }
            if(v[i]==1 && v[i+1]==2){
                gri++;
            }
        }
        if(pg==1){
            gri++;
        }
        fout<<gri;
    } else if(c==3) {
        int pg=0;
        int pgmax=INT_MIN;
        for(int i=1; i<=n; i++) {
            if(v[i]==2) {
                pg++;
            } else {
                pg=0;
            }
            if(pg>pgmax) {
                pgmax=pg;
            }
        }
        fout<<pgmax;
    }
    return 0;
}
