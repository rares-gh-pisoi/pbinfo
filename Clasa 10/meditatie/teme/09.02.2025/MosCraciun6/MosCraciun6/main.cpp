#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("moscraciun_6.in");
ofstream fout("moscraciun_6.out");
int v[101][101],n,m,sp=0;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,1,-1};
void umplere(int x,int y){
    if(v[x][y]==2){
        sp++;
    }
    v[x][y]=-1;
    for(int i=0;i<4;i++){
        int cx=x+dirl[i];
        int cy=y+dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && v[cx][cy]>0){
            umplere(cx,cy);
        }
    }
}

int main()
{
    int k,banc=0;
    fin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>v[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(v[i][j]>0){
                sp=0;
                umplere(i,j);
                if(sp>=k){
                    banc++;
                }
            }
        }
    }
    fout<<banc;
    return 0;
}
