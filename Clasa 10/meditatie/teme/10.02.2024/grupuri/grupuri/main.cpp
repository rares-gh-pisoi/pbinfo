#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("grupuri.in");
ofstream fout("grupuri.out");
int a[101][101],n;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,-1,1};
void umplere(int x,int y){
    a[x][y]=-1;
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
    fin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                cnt++;
                umplere(i,j);
            }
        }
    }
    fout<<cnt;
    return 0;
}
