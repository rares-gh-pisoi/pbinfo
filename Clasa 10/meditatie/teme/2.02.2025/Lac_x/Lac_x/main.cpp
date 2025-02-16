#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("lac_x.in");
ofstream fout("lac_x.out");
int a[1001][1001],n,m,nr;
int dirl[]= {-1,0,1,0};
int dirc[]= {0,1,0,-1};
void Fill(int x,int y) {
    a[x][y]=-1;
    nr++;
    for(int k=0; k<4; k++) {
        int cx=x,cy=y;
        cx+=dirl[k];
        cy+=dirc[k];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && a[cx][cy]==1) {
            Fill(cx,cy);
        }
    }
}

int main() {
    fin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            fin>>a[i][j];
        }
    }
    int apmax=-1,aimax=-1;
    for(int i=1; i<=m; i++) { /// linie are m elemente, parcurg linia 1 si n
        if(a[1][i]==1) {
            nr=0;  /// cate puncte atinge fill-ul
            Fill(1,i);
            if(nr>apmax) {
                apmax=nr;
            }
        }
        if(a[n][i]==1) {
            nr=0;  /// cate puncte atinge fill-ul
            Fill(n,i);
            if(nr>apmax) {
                apmax=nr;
            }
        }
    }

    for(int j=2; j<n; j++) { /// parcurg coloana 1 si m
        if(a[j][1]==1) {
            nr=0;
            Fill(j,1);
            if(nr>apmax) {
                apmax=nr;
            }
        }
        if(a[j][m]==1) {
            nr=0;
            Fill(j,m);
            if(nr>apmax) {
                apmax=nr;
            }
        }
    }

    for(int i=2; i<n; i++ ) {
        for(int j=2; j<m; j++)
            if(a[i][j]==1) {
                nr=0;
                Fill(i,j);
                if(nr>aimax)
                    aimax=nr;
            }
    }
    fout<<aimax<<" "<<apmax;
    return 0;
}
