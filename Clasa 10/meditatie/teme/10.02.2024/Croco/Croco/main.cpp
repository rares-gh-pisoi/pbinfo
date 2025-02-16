#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("croco.in");
ofstream fout("croco.out");
int a[101][101],n,m,v;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,1,-1};
void fill(int x,int y,int v){
    a[x][y]=v;
    for(int i=0;i<4;i++){
        int cx=x+dirl[i];
        int cy=y+dirc[i];
        if(a[cx][cy]==1){
            if(v==2){
                fill(cx,cy,3);
            }else{
                fill(cx,cy,2);
            }
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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1){
                fill(i,j,2);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==2){
                fout<<"C ";
            }else if(a[i][j]==3){
                fout<<"E ";
            }else{
                fout<<"A ";
            }
        }
        fout<<"\n";
    }
    return 0;
}
