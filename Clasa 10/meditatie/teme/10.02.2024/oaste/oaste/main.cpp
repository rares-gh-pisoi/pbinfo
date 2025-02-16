#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("oaste.in");
ofstream fout("oaste.out");
int v[101][101],n,m;
int dirl[]= {-1,1,0,0};
int dirc[]= {0,0,1,-1};

struct Regiune {
    int nrSol;
    int nrSolMax;
    int linieMax;
    int colMax;
};

void calculeazaRegiune(int x,int y, Regiune reg) {
    reg.nrSol +=v[x][y];
    if(v[x][y] > reg.nrSolMax) {
        reg.nrSolMax = v[x][y];
        reg.linieMax = x;
        reg.colMax = y;
    }

    v[x][y]=-1;

    for(int i=0; i<4; i++) {
        int cx=x+dirl[i];
        int cy=y+dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && v[cx][cy]>0) {
            calculeazaRegiune(cx,cy, reg);
        }
    }
}

int main() {
    fin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            fin>>v[i][j];
        }
    }
    int poz=0,smax=-1,lin,col,pozc,regmax=-1,alin,acol;
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            if(v[j][i]!=0) {
                poz++;
                Regiune reg;
                calculeazaRegiune(j,i, reg);
                if(reg.nrSol > smax) {
                    smax = reg.nrSol;
                    pozc = poz;
                    lin=reg.linieMax;
                    col=reg.colMax;
                    alin=j,acol=i;

                    regmax = reg.nrSolMax;
                } else if(reg.nrSol==smax) {
                    if(reg.nrSolMax>regmax) {
                        regmax=reg.nrSolMax;
                        pozc=poz;
                        lin=reg.linieMax;
                        col=reg.colMax;
                        alin=j,acol=i;
                    } else if(reg.nrSolMax == regmax) {
                        char a[]= {j,i};
                        char b[]= {alin,acol};
                        if(strcmp(a,b)<0) {
                            regmax=reg.nrSolMax;
                            pozc=poz;
                            lin=reg.linieMax;
                            col=reg.colMax;
                            alin=j,acol=i;
                        }
                    }
                }

            }
        }
    }
    fout<<pozc<<" "<<lin<<" "<<col;
    return 0;
}
