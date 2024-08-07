#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("divk.in");
ofstream fout("divk.out");
int main() {
    long long n;
    long long k;
    fin>>n>>k;
    for (int i=1; i<=n; i++) {
        long long x;
        fin>>x;

        int divx=0;
        for(int d=1; d*d<=x; d++) {
            if(x%d==0) {
                if(d!=x/d) {
                    divx+=2;
                } else {
                    divx++;
                }
            }
        }
        if(divx>=k) {
            fout<<x<<" ";
        }
    }

    return 0;
}
