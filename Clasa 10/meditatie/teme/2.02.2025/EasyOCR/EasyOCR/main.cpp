#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("easyocr.in");
ofstream fout("easyocr.out");
int a[1001][1001],ap[10],n,m,nr;
char ch;
int dirl[]={-1,0,1,0,-1,1,-1,1};
int dirc[]={0,1,0,-1,-1,-1,1,1};
int lmin,lmax,cmin;
void Fill(int x,int y){
    a[x][y]=-1;
    nr++;
    lmin=min(lmin,x);
    lmax=max(lmax,x);
    cmin=min(cmin,y);
    for(int i=0;i<8;i++){
        int cx=x,cy=y;
        cx+=dirl[i];
        cy+=dirc[i];
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && a[cx][cy]==1){
            Fill(cx,cy);
        }
    }
}
int main()
{
    fin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>ch;
            a[i][j]=ch-'0';
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1){
                nr=0;
                lmax=0; lmin=cmin=2000;
                Fill(i,j);
                if(nr==20){
                    ap[0]++;
                }
                if(nr==8){
                    ap[1]++;
                }
                if(nr==14){
                    ap[4]++;
                }
                if(nr==11){
                    ap[7]++;
                }
                if(nr==23){
                    ap[8]++;
                }
                if(nr==19){
                    if(a[lmax-1][cmin]==-1){
                        ap[2]++;
                    }else if(a[lmin+1][cmin]==-1){
                        ap[5]++;
                    }else{
                        ap[3]++;
                    }
                }
                if(nr==21){
                    if(a[lmax-1][cmin]==-1){
                        ap[6]++;
                    }else{
                        ap[9]++;
                    }
                }
            }
        }
    }
    int tot=0;
    for(int i=0;i<=9;i++){
        tot+=ap[i];
    }
    fout<<tot<<"\n";
    for(int i=0;i<=9;i++){
        if(ap[i]>0){
            fout<<i<<" "<<ap[i]<<" ";
        }
    }
    return 0;
}
