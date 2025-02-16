#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("parcela.in");
ofstream fout("parcela.out");
int a[101][101],n,m,ar=0;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,-1,1};
void umplere(int x,int y){
    a[x][y]=-1;
    ar++;
    for(int i=0;i<4;i++){
        int cx=x+dirl[i];
        int cy=y+dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=n && a[cx][cy]==1){
            umplere(cx,cy);
        }
    }
}
int main()
{
    fin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>a[i][j];
        }
    }
    int amax=-1,cnt=0,cntmax;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1){
                cnt++;
                umplere(i,j);
                if(ar>amax){
                    amax=ar;
                    cntmax=cnt;
                }
                ar=0;
            }
        }
    }
    fout<<cnt<<" "<<amax<<" "<<cntmax;
    return 0;
}
