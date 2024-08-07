#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin ("smartphone.in");
ofstream fout ("smartphone.out");
int main() {
    int n,c,k;
    fin>>c;
    int MAX1=INT_MIN;/// telefonul cu cea mai mare calitate
    int MAX2=INT_MIN; /// telefonul cu a doua cea mai mare calitate
    fin>>n;
    for (int i=1; i<=n; i++) {
        fin>>k;
        if (k>MAX1) {
            MAX2=MAX1;
            MAX1=k;
        } else {
            if (k>MAX2) {
                MAX2=k;
            }
        }
    }
    switch (c) {
    case 1:
        fout<<MAX1;
        break;
    case 2:
        fout<<MAX2;
        break;
    }

    return 0;
}
