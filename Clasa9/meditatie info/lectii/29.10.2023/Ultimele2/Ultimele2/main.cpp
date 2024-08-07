#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin ("minimdoua.in");
ofstream fout ("minimdoua.out");
int main() {
    int n,x;
    fin>>n;
    int p=INT_MAX;
    int u=INT_MAX;
    for (int i=1; i<=n; i++) {
        fin>>x;

        if(x>=10 && x%10==x/10%10) {
            if (x<u) {
                p=u;
                u=x;
            } else {
                if(x<p ) {
                    p=x;
                }

            }
        }
    }
    if (p==INT_MAX || u==INT_MAX) {
        fout<<"numere insuficiente";
    } else {
        fout<<u<<" "<<p;
    }
    return 0;
}
