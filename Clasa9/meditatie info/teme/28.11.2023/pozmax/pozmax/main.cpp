#include <iostream>
#include <fstream>
#include <cfloat>
using namespace std;
ifstream fin ("pozmax.in");
ofstream fout("pozmax.out");
int main() {
    int n;
    fin>>n;
    float max_v=FLT_MIN;
    int p1=0;
    int p2=0;
    for(int i=1; i<=n; i++) {
        float k;
        fin>>k;
        if (k>max_v) {
            max_v=k;
            p1=i;
            p2=i;
        } else if(k==max_v) {
            p2=i;
        }

    }
    fout<<p1<<" "<<p2;
    return 0;
}
