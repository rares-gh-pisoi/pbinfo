#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("sumcolmax.in");
ofstream fout("sumcolmax.out");
int a[26][26];
int main() {
    int n,m,i,j;
    fin>>n>>m;
    for(i=1; i<=n; i++) {
        for(j=1; j<=m; j++) {
            fin>>a[i][j];
        }
    }
    int smax=INT_MIN;
    int pz;
    for(j=1; j<=m; j++) {
        int s=0;
        for(i=1; i<=n; i++) {
            s+=a[i][j];
        }
        if(s>smax) {
            smax=s;
            pz=j;
        }
    }
    for(int i=1; i<=n; i++) {
        fout<<a[i][pz]<<" ";
    }
    return 0;
}
