#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("gustare.in");
ofstream fout("gustare.out");
int a[500001];
int b[500001];
int main() {
    int n,m,x;
    fin>>n;
    for(int i=1; i<=n; i++) {
        fin>>a[i];
    }
    fin>>m;
    for(int i=1; i<=m; i++) {
        fin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int t;
    fin>>t;
    for(int i=1; i<=t; i++) {
        fin>>x;
        int st=1,dr=m;
        if(a[n]+b[m]<x || a[1]+b[1]>x) {
            fout<<"NU"<<"\n";
        } else {
            while(st<=n && dr>=1) {
                if(a[st]+b[dr]==x) {
                    fout<<"DA"<<"\n";
                    break;
                } else if(a[st]+b[dr]>x) {
                    dr--;
                } else
                    st++;
            }
            if(st>n || dr<1) {
                fout<<"NU"<<"\n";
            }
        }
    }
    return 0;
}
