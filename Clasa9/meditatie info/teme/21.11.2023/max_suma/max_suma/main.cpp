#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("max_suma.in");
ofstream fout("max_suma.out");
int main() {
    int n,k;
    fin>>n>>k;
    for(int i=1; i<=n; i++) {
        int nr_max=INT_MIN;
        int su_sir=0;
        for(int j=1; j<=k; j++) {
            int d;
            fin>>d;
            if(d>nr_max) {
                nr_max=d;
            }
            su_sir+=d;

        }
        fout<<nr_max<<" "<<su_sir;
        fout<<"\n";
    }

    return 0;
}
