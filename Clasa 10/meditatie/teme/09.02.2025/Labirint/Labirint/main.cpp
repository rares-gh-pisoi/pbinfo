#include <iostream>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
ifstream fin("labirint.in");
ofstream fout("labirint.out");
int v[1001][1001],viz[1001][1001],n,K;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,1,-1};
void Fill(int x,int y){
  if(v[x][y]>K)
      return;
   viz[x][y]=1;
   for(int i=0;i<4;i++){
      int l=x+dirl[i];
      int c=y+dirc[i];
      if(l>=1&&l<=n&&c>=1&&c<=n)
          if(viz[l][c]==0&&v[l][c]<=K)
              Fill(l,c);
   }
}
int main()
{
    int Max,sol;
    fin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>v[i][j];
            Max=max(Max,v[i][j]);
        }
    }
    /// stabilesc prin cautare binara valoarea minima pentru a ajunge din 1,1 in n,m
    int st=v[1][1], dr=Max;
    while(st<=dr){
        int mid=(st+dr)/2;
        memset(viz,0,sizeof(viz));
        K=mid;
        Fill(1,1);
        if(viz[n][n]==1){
            sol=mid;
            dr=mid-1;
        }
        else
            st=mid+1;
    }
    fout<<sol;

    return 0;
}
