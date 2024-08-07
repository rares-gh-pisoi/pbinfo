#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secventa.in");
ofstream fout("secventa.out");
int main() {
    int n;
    fin>>n;

    int ca,c;
    fin>>ca;

    int lg,lgmax;
    lg=1;
    lgmax=1;

    int s,smax;
    s=ca;
    smax=0;

    int st,dr;
    st=1;
    dr=1;

    for(int i=2; i<=n; i++) {
        fin>>c;
        if(ca%2!=c%2) {
            lg++;
            s=s+c;
        } else {
            lg=1;
            s=c;
        }
        if(lg>lgmax) {
            lgmax=lg;
            smax=s;
            dr=i;
            st=dr-lgmax+1;
        } else if(lg==lgmax) {
            if(s>=smax) {
                smax=s;
                dr=i;
                st=dr-lgmax+1;
            }
        }
        ca=c;
    }
    fout<<st<<" "<<dr;
    return 0;
}
