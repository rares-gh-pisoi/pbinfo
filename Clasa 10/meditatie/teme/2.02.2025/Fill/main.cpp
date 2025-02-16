#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("fill.in");
ofstream fout("fill.out");
int dirl[]= {-1,0,1,0};
int dirc[]= {0,1,0,-1};
int a[101][101],n,m;
void Fill(int x,int y) {
    a[x][y]=-1;
    /// gasesc vecinii
    for(int k=0; k<4; k++) {
        int ci=x+dirl[k];
        int  cj=y+dirc[k];
        if(ci>=1 && ci<=n && cj>=1 && cj<=m&&a[ci][cj]==1)
            Fill(ci,cj);
    }
}
int main() {

    fin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            fin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(a[i][j]==1) {
                cnt++;
                Fill(i,j);
            }
        }
    }
    fout<<cnt;
    return 0;
}
