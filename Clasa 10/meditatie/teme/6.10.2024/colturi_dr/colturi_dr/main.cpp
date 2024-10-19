#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("colturi_dr.in");
ofstream fout("colturi_dr.out");
int a[101][101];
int main() {
    int n,m,x;
    fin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            fin>>a[i][j];
        }
    }
    int nr0=0;
    int nr1=0;
    int amax0=0;
    int amax1=0;
    int armax=INT_MIN;
    for(int i1=1; i1<=n; i1++) {
        for(int i2=i1+1; i2<=n; i2++) {
            for(int st=1; st<=m; st++) {
                if(a[i1][st]==a[i2][st]) {
                    for(int dr=st+1; dr<=m; dr++) {
                        if(a[i1][dr]==a[i1][st] && a[i1][dr]==a[i2][dr]) {
                            if(a[i1][dr]==0) {
                                nr0++;
                            } else {
                                nr1++;
                            }
                            int ar=(dr-st+1)*(i2-i1+1);
                            if(ar>armax) {
                                armax=ar;

                            }
                            if(a[i1][st]==0) {
                                if(ar>amax0)
                                    amax0=ar;
                            } else if(ar>amax1)
                                amax1=ar;

                        }
                    }
                }
            }
        }
    }
    fout<<nr0+nr1<<" "<<armax<<" ";
    if(armax==amax0&&armax==amax1){
        fout<<nr0+nr1;
    }else if(armax==amax0){
        fout<<nr0;
    }else
        fout<<nr1;
    return 0;
}
