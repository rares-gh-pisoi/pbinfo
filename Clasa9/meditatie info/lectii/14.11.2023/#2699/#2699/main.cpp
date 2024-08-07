#include <iostream>
#include <fstream>
#include <climits>

using namespace std;
ifstream fin ("maximpar.in");
ofstream fout ("maximpar.out");
int main() {
    int n,x;
    fin>>n;
    int Max=INT_MIN;
    int ap=0;
    for (int i=1; i<=n; i++) {
        fin>>x;
        if (x%2==0) {
            if(x>Max) {
                Max=x;
                ap=1;
            } else {
                if (x==Max)
                    ap++;
            }
        }
    }
    if(ap==0) {
        fout<<-1;
    } else {
        fout<<Max<<" "<<ap;
    }
    return 0;
}
