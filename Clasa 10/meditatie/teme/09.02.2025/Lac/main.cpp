#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("lac.in");
ofstream fout("lac.out");
int v[1001][1001],n,m;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,-1,1};
void Fill(int x,int y){
    v[x][y]=-1;
    for(int i=0;i<4;i++){
        int cx=x,cy=y;
        cx+=dirl[i];
        cy+=dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && v[cx][cy]==1){
            Fill(cx,cy);
        }
    }
}
int main()
{
    fin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>v[i][j];
        }
    }
    int nri=0,nrp=0;
    for(int i=1;i<=m;i++){
        if(v[1][i]==1){
            nrp++;
            Fill(1,i);
        }
        if(v[n][i]==1){
            nrp++;
            Fill(n,i);
        }
    }
    for(int i=2;i<n;i++){
        if(v[i][1]==1){
            nrp++;
            Fill(i,1);
        }
        if(v[i][m]==1){
            nrp++;
            Fill(i,m);
        }
    }
    for(int i=2;i<n;i++){
        for(int j=2;j<m;j++){
            if(v[i][j]==1){
                nri++;
                Fill(i,j);
            }
        }
    }
    fout<<nri<<" "<<nrp;
    return 0;
}
