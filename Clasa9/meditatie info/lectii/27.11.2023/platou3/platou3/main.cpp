#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("platou3.in");
ofstream fout("platou3.out");
int main() {
    int n,x;
    fin>>n;
    int l=0;
    int lmax=0;
    for(int i=1; i<=n; i++) {
        fin>>x;
        if(x>0) {
            l++;
        } else {
            l=0;
        }
        if(l>lmax) {
            lmax=l;
        }
    }
    fout<<lmax;
    return 0;
}
