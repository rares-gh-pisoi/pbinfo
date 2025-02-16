#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("moscraciun4.in");
ofstream fout("moscraciun4.out");
int v[101][101],n,m,sb=0,sr=0;
int dirl[]= {-1,1,0,0};
int dirc[]= {0,0,-1,1};
void umplere(int x,int y) {
    if(v[x][y]==3) {
        sb++;
    }else if(v[x][y]==4) {
        sr++;
    }
    v[x][y]=-1;
    for(int i=0;i<4;i++) {
        int cx=x,cy=y;
        cx+=dirl[i];
        cy+=dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && v[cx][cy]>0) {
            umplere(cx,cy);
        }
    }

}
int main() {
    fin>>n>>m;
    int pzl,pzc;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>v[i][j];
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(v[i][j]==2) {
                pzl=i;
                pzc=j;
            }
        }
    }
    umplere(pzl,pzc);
    fout<<sb<<" "<<sr;
    return 0;
}
