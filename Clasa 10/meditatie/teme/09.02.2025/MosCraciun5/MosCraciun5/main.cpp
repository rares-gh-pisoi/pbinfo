#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("moscraciun5.in");
ofstream fout("moscraciun5.out");
int v[101][101],n,m,s=0;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,-1,1};
void umplere(int x,int y){
    if(v[x][y]>0)
        s+=v[x][y];

    v[x][y]=-1;
    for(int i=0;i<4;i++){
        int cx=x,cy=y;
        cx+=dirl[i];
        cy+=dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && v[cx][cy]>0){
            umplere(cx,cy);
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
    umplere(1,1);
    fout<<s;
    return 0;
}
