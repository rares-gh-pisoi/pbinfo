#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("amongus.in");
ofstream fout("amongus.out");
int v[101][101],n,m,vent=0;
int dirl[]={-1,1,0,0,1,1,-1,-1};
int dirc[]={0,0,-1,1,1,-1,-1,1};
void umplere(int x,int y){
    if(v[x][y]==2){
        vent++;
    }
    v[x][y]=3;
    for(int i=0;i<8;i++){
        int cx=x+dirl[i];
        int cy=y+dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && v[cx][cy]!=1 && v[cx][cy]!=3){
            umplere(cx,cy);
        }
    }
}
int main()
{
    int c;
    fin>>c>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>v[i][j];
        }
    }
    if(v[1][1]==1){
        fout<<"misiune esuata";
    }else{
        if(c==1){
            int nr0=0;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if(v[i][j]==0){
                        nr0++;
                    }
                }
            }
            fout<<nr0;
        }else if(c==2){
            umplere(1,1);
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    fout<<v[i][j]<<" ";
                }
                fout<<"\n";
            }
        }else{
            umplere(1,1);
            fout<<vent;
        }
    }
    return 0;
}
