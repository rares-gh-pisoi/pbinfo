#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("oaste2.in");
ofstream fout("oaste2.out");
int a[101][101],n,m,s=0,reg=0;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,1,-1};
void umplere(int x,int y){
    s+=a[x][y];
    reg++;
    a[x][y]=-1;
    for(int i=0;i<4;i++){
        int cx=x+dirl[i];
        int cy=x+dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && a[cx][cy]>0){
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
    int smax=-1,regmin=INT_MAX;
    for(int j=1;j<=m;j++){
        for(int i=1;i<=n;i++){
            if(a[i][j]>0){
                umplere(i,j);
                cout<<s<<" "<<reg<<endl;
                if(s>smax){
                    smax=s;
                    regmin=reg;
                }else if(s==smax && reg<regmin){
                    regmin=reg;
                }
                s=0,reg=0;
            }
        }
    }
    fout<<smax<<" "<<regmin;
    return 0;
}
