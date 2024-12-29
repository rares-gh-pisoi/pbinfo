#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("asfalt.in");
ofstream fout("asfalt.out");
int v[10001];
int main() {
    int n,m,a,b;
    fin>>n>>m;
    for(int i=1; i<=m; i++) {
        fin>>a>>b;
        for(int j=a;j<b;j++){
            v[j]++;
        }
    }
    int neasf=0;
    int rep=0;
    for(int i=1; i<n; i++) {
        if(v[i]>1)
            rep++;
        else if(v[i]==0)
            neasf++;
    }
    fout<<neasf<<" "<<rep;
    return 0;
}
