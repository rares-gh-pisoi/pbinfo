#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("phil.in");
ofstream fout("phil.out");
int v[101][101],scP=0,sp=0,scv=0,sv=0,n,m;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,-1,1};
void umplere1(int x,int y){
    if(v[x][y]==0){
        scP++;
    }
    if(v[x][y]==1){
        sp++;
    }
    v[x][y]=-1;
    for(int i=0;i<4;i++){
        int cx=x+dirl[i];
        int cy=y+dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && v[cx][cy]<2 && v[cx][cy]!=-1){
            umplere1(cx,cy);
        }
    }
}
void umplere2(int x,int y){
    int c=v[x][y];
    v[x][y]=-1;
    for(int i=0;i<4;i++){
        int cx=x+dirl[i];
        int cy=y+dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && v[cx][cy]==c && v[cx][cy]!=-1){

            umplere2(cx,cy);
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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(v[i][j]==0 || v[i][j]==1){
                umplere1(i,j);
            }
            if(v[i][j]==2){
                scv++;
                umplere2(i,j);
            }
            if(v[i][j]==3){
                sv++;
                umplere2(i,j);
            }
        }
    }
    if(c==1){
        fout<<sp/scP;
    }else{
        if(sv-scv>=0){
            fout<<sv-scv;
        }else{
            fout<<(-1)*(sv-scv);
        }
    }
    return 0;
}
