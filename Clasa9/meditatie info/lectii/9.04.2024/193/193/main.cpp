#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("interschimbarelinii.in");
ofstream fout("interschimbarelinii.out");
int a[26][26];
int main() {
    int n,m;
    fin>>n>>m;
    int amax=INT_MIN;
    int amin=INT_MAX;
    int pmax;
    int pmin;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            fin>>a[i][j];
            if(a[i][j]>amax) {
                amax=a[i][j];
                pmax=i;
            }
            if(a[i][j]<amin) {
                amin=a[i][j];
                pmin=i;
            }
        }
    }
    for(int j=1; j<=m; j++) {
        int aux=a[pmax][j];
        a[pmax][j]=a[pmin][j];
        a[pmin][j]=aux;
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            fout<<a[i][j]<<" ";
        }
        fout<<endl;
    }
    return 0;
}
