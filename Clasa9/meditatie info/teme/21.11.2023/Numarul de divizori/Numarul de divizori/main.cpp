#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");

int main() {
    int n;
    fin>>n;
    int nrdiv=0;
    for (int d=1; d*d<=n; d++) {
        if(n%d==0) {
            if(d!=n/d) {
                nrdiv+=2;
            } else {

                nrdiv++;
            }
        }

    }
    fout<<nrdiv;
    return 0;
}
