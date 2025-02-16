#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("moscraciun.in");
ofstream fout("moscraciun.out");
int a[101][101],n,m,nr;
int dirl[]={-1,0,1,0};
int dirc[]={0,1,0,-1};
void Fill(int x,int y){
    if(a[x][y]==3)
         nr++;
    a[x][y]=-1;
    for(int i=0;i<4;i++){
        int cx=x,cy=y;
        cx+=dirl[i];
        cy+=dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && a[cx][cy]>0){
            Fill(cx,cy);
        }
    }
}
int main()
{
    int l,c;
    fin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>a[i][j];
            if(a[i][j]==2){
                l=i;
                c=j;
            }
        }
    }
    nr=0;
    Fill(l,c);
    fout<<nr;
    return 0;
}
